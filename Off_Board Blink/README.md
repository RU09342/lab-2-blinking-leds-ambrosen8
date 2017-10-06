# Off Board Blink

## Purpose
Perform the previous exercises using the MSP430G2553 off the development board

## Theory

The MSP430G2 comes with the MSP430G2553 IC placed in the center of it. This IC can be removed and placed individually into a bread board and has the ability to complete the previous exercises. The off board exercises use the same code as used in the on board exercises, however the off board circuit needs to be created correctly. For instance, the test pin and reset pin on the development board need to be connected to the test and reset pin of the G2553 IC. As seen in the image below two 10 uF capacitors were added to the circuit. One capacitor acts as a bypass capacitor which filters out any AC noise that may damage the IC. The other acts as a bulk capacitor which prevents the voltage dropping too rapidly and damaging the chip.

## Simple Blink

### Demonstation

<img src="https://github.com/RU09342/lab-2-blinking-leds-ambrosen8/blob/master/Off_Board%20Blink/Assets/SimpleBlink.jpg" width="300"/>

## Multiple Blink

### Demonstration

<img src="https://github.com/RU09342/lab-2-blinking-leds-ambrosen8/blob/master/Off_Board%20Blink/Assets/MultipleBlink.jpg" width="300"/>

## Button Blink

### Demonstration

<img src="https://github.com/RU09342/lab-2-blinking-leds-ambrosen8/blob/master/Off_Board%20Blink/Assets/ButtonBlink.jpg" width="300"/>