//Simple Blink
//MSP430G2553 On Board
#include <msp430.h>
#include <msp430G2553.h>

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer


    P1DIR = BIT0;               //Sets LED 1 as Output




while(1)
{
    P1OUT ^= 0x01;              //Toggle P1.0
  _delay_cycles(1000000);
}

}