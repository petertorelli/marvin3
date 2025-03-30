# Introduction

This is a brushed-DC, PID controlled, motor-controller designed to work with [GoBilda Yellowjack motors](https://www.gobilda.com/yellow-jacket-planetary-gear-motors). GoBilda makes a controller, but it doesn't use the decoder circuit. For me, this is part of a larger project and I need to know if wheels are stalled so that the MC can provide more current.

<img src="https://github.com/petertorelli/marvin3/blob/main/mc/images/mc-1.0-sch.png" width="320px" />

Output is 24 KHz PWM wave from zero to 95% duty cycle. The input is a standard servo controller 500~1500 ms at 50 Hz. It requires 12 VDC input, and supplies 5 V to the controller, motor decoder, and servo (which usually doesn't need it).

The PID is tuned to avoid overshoot spikes at a step function input, but I haven't tested the settings with all six motors running. Probably later this summer.

It uses an Infineon PSoC4 MCU, Infineon 140W NFETS, and Infineon IR2184 half-bridge drivers (notice the trend?). The motor stall current is 9A, and I wanted to makes sure the board could deliver that. (The ever-popular LM298 only delivers 2A.)

The schematic was drawn in KiCad and hand routed so that the high-current path has priority. I could have compacted it more, but with only two layers I had to make sure no MCU traces crossed the high-current return path on the bottom layer. So I put the MCU and its logic on the other side of the board, thus the XT30 power supply jumper RIGHT IN THE MIDDLE OF THE LAYOUT. I also used double-weight copper (0.2 oz) so that if it does stall at 9 A there's plenty of headroom.

I'm pleased with the progression from layout, to 3D rendering (I put way too much work into finding 3D models), and the actual board. Here is composite:

<img src="https://github.com/petertorelli/marvin3/blob/main/mc/images/mc-3stages.png" width="320px" />

# To Do

1. The gate resistors are rated for 1/10th of a Watt, so I'm a little concerned they are gonna go \*poof\* at some point. I realize once the gate charges up there's miniscule voltage drop, but even the width of the peaks (shown below) should be out of spec, and nothing is even getting warm. So I'm probably misunderstand the electrical characteristics. (If you have any ideas, drop me a comment.)

<img src="https://github.com/petertorelli/marvin3/blob/main/mc/images/voltage-across-33R.png" width="320px" />

3. I tried increasing the gate resistors to 100 Ohms and the slopes got worse, but the supply current increased significanlty. I wasn't expecting it to be so sensitive. I tried running without resistors and cooked several IR2184s (I know, the schematic indicates a resistor, just wanted to try).

33 Ohm slope vs 100 Ohm slope = 52 to 390 µs difference. Even if I moved the cursors to the 20%/80% slope points it still much more than expected.

<img src="https://github.com/petertorelli/marvin3/blob/main/mc/images/gate-res-33R.png" width="320px" /><img src="https://github.com/petertorelli/marvin3/blob/main/mc/images/gate-res-100R.png" width="320px" />

4. I didn't need a fast-shutoff diode because 24 KHz is slow enough and I didn't want to cramp the layout, and it didn't make much difference. Here are with (left) and without (right):

<img src="https://github.com/petertorelli/marvin3/blob/main/mc/images/with-gate-diode.png" width="320px" /><img src="https://github.com/petertorelli/marvin3/blob/main/mc/images/without-gate-diode.png" width="320px" />

6. The PID is set to 50 ms updates, and with 4x from the quadrature decoder I get 2400 pulses per second at full speed, or 120 per 50 ms. Seems to be working ok.

Here is the step function response and follow-response charts:

<img src="https://github.com/petertorelli/marvin3/blob/main/mc/images/step-function.png" width="320px"><img src="https://github.com/petertorelli/marvin3/blob/main/mc/images/follow-response.png" width="320px">

7. 48 MHz is probably a bit overpowered, as the main loop takes 6.3 µs when not updating the pid, and 9.3 µs when updating (reading the QUADDEC and a `printf`). Since this  outpaces the update speed of the PID at 50 ms I could have used an even smaller & slower version of the PSoC4 if they had enough PWMs. Note that a `while(1)` loop with just a GPIO toggle takes 340 ns. Turns out there's now a 12V version of PSOC4 so I could also ditch the linear regulator if there's a package match. (Should probably use an OPTIREG regulator so I can be 100% Infineon.)

8. I built it to use standard servo PWM signaling since the PWM counter doesn't need any CPU cycles, but since I also supplied a UART on the board for debug/telemetry, I could also just send exact values instead of having to decode a PWM.
