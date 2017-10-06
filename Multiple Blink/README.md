# Multiple Blink

## Purpose
Blink multiple LEDs at various times

## Theory

In order for the LEDs to blink a loop constantly runs that continuously increments an integer. Each time the integer reaches the specified threshold the LED will blink. Once the second LED reaches the blink threshold, the incremented interger gets set equal to zero again. Then the process repeats.

## Individual Board Features

### MSP430F5529
Every time the variable increments 1000 times the Red LED (P1.0) gets switched. Then when the incremented value reaches 2000 the Green LED (P4.7) blinks and the variable gets set to 0.

### MSP430FR2311
Every time the variable increments 1000 times the Red LED (P1.0) gets switched. Then when the incremented value reaches 2000 the Green LED (P2.0) blinks and the variable gets set to 0.

### MSP430FR5994
Uses both buttons (P5.6 & P5.5) to blink both LEDs (P1.0 & P1.1, Red & Green respectively). When Button P5.6 is pressed it causes the Red LED to blink. When Button P5.5 is pressed it causes the Green LED to blink.

### MSP430FR6989
Uses both buttons (P1.1 & P1.2) to blink both LEDs (P1.0 & P1.7, Red & Green respectively). When Button P5.6 is pressed it causes the Red LED to blink. When Button P5.5 is pressed it causes the Green LED to blink.

### MSP4302553
Since there is only one button (P1.3) it direction controls the Red LED (P1.0).

## Demonstation

![alt text](https://github.com/RU09342/lab-2-blinking-leds-ambrosen8/blob/master/Button%20Blink/Assets/ButtonBlink_fixed.gif)