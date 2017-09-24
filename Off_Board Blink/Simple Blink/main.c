//Button Blink
//Button Toggle
//MSP430G2553 On Board
#include <msp430.h>
#include <msp430G2553.h>


void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer

//LED
P1DIR = BIT0;


//Button
P1REN = BIT3;
P1OUT = BIT3;


while(1)
{
if((P1IN & BIT3) == 0x00)
{
    P1OUT ^= BIT0;
    while((P1IN & BIT3) == 0x00);

}
}
}