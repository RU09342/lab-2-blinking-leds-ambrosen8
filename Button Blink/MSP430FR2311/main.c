//Button Blink
//Button Toggle
//MSP430FR2311
#include <msp430.h>
#include <msp430FR2311.h>


void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer
    PM5CTL0 &= ~LOCKLPM5;       //Stop Default High-Impedance Mode
//LED
P1DIR = BIT0;


//Button
P1REN = BIT1;
P1OUT = BIT1;


while(1)
{
if((P1IN & BIT1) == 0x00)
{
    P1OUT ^= BIT0;
    while((P1IN & BIT1) == 0x00);

}
}
}