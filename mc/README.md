# Introduction

This is a brushed-DC, PID controlled, motor-controller designed to work with [GoBilda Yellowjack motors](https://www.gobilda.com/yellow-jacket-planetary-gear-motors). GoBilda makes a controller, but it doesn't use the decoder circuit. For me, this is part of a larger project and I need to know if wheels are stalled so that the MC can provide more current.

Output is 24 KHz PWM wave from zero to 95% duty cycle. The input is a standard servo controller 500~1500 ms at 50 Hz. It requires 12 VDC input, and supplies 5 V to the controller, motor decoder, and servo (which usually doesn't need it).

The PID is tuned to avoid overshoot spikes at a step function input, but I haven't tested the settings with all six motors running. Probably later this summer.

It uses an Infineon PSoC4 MCU, Infineon 140W NFETS, and Infineon IR2184 half-bridge drivers (notice the trend?). The motor stall current is 9A, and I wanted to makes sure the board could deliver that. (The ever-popular LM298 only delivers 2A.)

The schematic was drawn in KiCad and hand routed so that the high-current path has priority. I could have compacted it more, but with only two layers I had to make sure no MCU traces crossed the high-current return path on the bottom layer. So I put the MCU and its logic on the other side of the board, thus the XT30 power supply jumper RIGHT IN THE MIDDLE OF THE LAYOUT. I also used double-weight copper (0.2 oz) so that if it does stall at 9 A there's plenty of headroom.

# To Do

1. I'm a little concerned about the 33 Ohm gate resistors because it appears they are carrying 12V, which leads to (12*12)/33 = 4 Watts, at 95% duty cycle. THey should have smoked off the board but they aren't even hot so I must have measured incorrectly.

2. The PID is set to 50 ms updates, and with 4x from the quadrature decoder I get 2400 pulses per second at full speed, or 120 per 50 ms. Seems to be working ok.

3. 48 MHz is probably a bit overpowered, as the main loop takes 6.3 µs when not updating the pid, and 9.3 µs when updating (reading the QUADDEC and a `printf`). Since this  outpaces the update speed of the PID at 50 ms I could have used an even smaller version of the PSoC4. Note that a `while(1)` loop with just a GPIO toggle takes 340 ns.
