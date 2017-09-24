//Simple Blink
//MSP430FR6989
#include <msp430.h>
#include <msp430FR6989.h>

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer
    PM5CTL0 &= ~LOCKLPM5;       //Stop Default High-Impedance Mode

    P1DIR = BIT0;               //Sets LED 1 as Output




while(1)
{
    P1OUT ^= 0x01;              //Toggle P1.0
  _delay_cycles(1000000);
}

}
