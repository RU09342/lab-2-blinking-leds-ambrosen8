//Button Blink
//Multiple Button LED Toggle
//MSP430F5529
#include <msp430.h>
#include <msp430F5529.h>


void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer

//---------------LEDs-----------------------

P1DIR = BIT0;				//Sets Red LED as output
P4DIR = BIT7;				//Sets Green LED as output

//----------------Button 1------------------------
P1DIR &= ~(BIT1);
P1REN = BIT1;
P1OUT = BIT1;
//----------------Button 2----------------
P2DIR &= ~(BIT1);
P2REN = BIT1;
P2OUT = BIT1;


while(1)
{
if((P2IN & BIT1) == 0x00)
{
    P1OUT ^= BIT0;
    while((P2IN & BIT1) == 0x00);

}
if((P1IN & BIT1) == 0x00)
{
    P4OUT ^= BIT7;
    while((P1IN & BIT1) == 0x00);

}
}
}