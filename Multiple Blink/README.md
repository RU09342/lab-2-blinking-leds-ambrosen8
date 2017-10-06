# Multiple Blink

## Purpose
Blink multiple LEDs at various times

## Theory

In order for the LEDs to blink a loop constantly runs that continuously increments an integer. Each time the integer reaches the specified threshold the LED will blink. Once the second LED reaches the blink threshold, the incremented interger gets set equal to zero again. Then the process repeats.

## Individual Board Features

### MSP430F5529
Every time the variable increments 1000 times the Red LED (P1.0) gets switched. Then when the incremented value reaches 2000 the Green LED (P4.7) blinks and the variable gets set to 0.

### MSP430FR2311
Every time the variable increments 1000 times the Red LED (P1.0) gets switched. Then when the incremented value reaches 2000 the Green LED (2.0) blinks and the variable gets set to 0.

### MSP430FR5994
Every time the variable increments 1000 times the Red LED (P1.0) gets switched. Then when the incremented value reaches 2000 the Green LED (P1.1) blinks and the variable gets set to 0.


### MSP430FR6989
Every time the variable increments 1000 times the Red LED (P1.0) gets switched. Then when the incremented value reaches 2000 the Green LED (P1.7) blinks and the variable gets set to 0.


### MSP4302553
Every time the variable increments 1000 times the Red LED (P1.0) gets switched. Then when the incremented value reaches 2000 the Green LED (P1.6) blinks and the variable gets set to 0.


## Demonstation

![alt text](https://github.com/RU09342/lab-2-blinking-leds-ambrosen8/blob/master/Multiple%20Blink/Assets/MultBlink.gif)