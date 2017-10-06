# Button Blink
_

## Purpose
_Horizontal line :_
Blink an LED using the on board MSP430 buttons.

## Theory
_
When a button gets pressed on the board an LED gets switched on or switched off. In order for this to occur the processor is constantly checking to see if a button gets pressed: this process is called polling. 

## Individual Board Features
_

### MSP430F5529
Uses both buttons (P2.1 & P1.1) to blink both LEDs (P1.0 & P4.7, Red & Green respectively). When Button P2.1 is pressed it causes the Red LED to blink. When Button P1.1 is pressed it causes the Green LED to blink.

### MSP430FR2311
Since there is only one button (P1.1) it direction controls the Red LED (P1.0).

### MSP430FR5994
Uses both buttons (P5.6 & P5.5) to blink both LEDs (P1.0 & P1.1, Red & Green respectively). When Button P5.6 is pressed it causes the Red LED to blink. When Button P5.5 is pressed it causes the Green LED to blink.

### MSP430FR6989
Uses both buttons (P1.1 & P1.2) to blink both LEDs (P1.0 & P1.7, Red & Green respectively). When Button P5.6 is pressed it causes the Red LED to blink. When Button P5.5 is pressed it causes the Green LED to blink.

### MSP4302553
Since there is only one button (P1.3) it direction controls the Red LED (P1.0).

## Demonstation
_
![alt text](https://github.com/RU09342/lab-2-blinking-leds-ambrosen8/blob/master/Button%20Blink/Assets/ButtonBlink.gif)