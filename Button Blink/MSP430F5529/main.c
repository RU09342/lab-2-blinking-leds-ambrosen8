//Button Blink
//Multiple Button LED Toggle
//MSP430F5529
#include <msp430.h>
#include <msp430F5529.h>


void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer

//LED
P1DIR = 0x00;
P1DIR |= BIT0;
P4DIR = BIT7;

//Button
P2DIR = 0x00;
P1REN = BIT1;
P1OUT = BIT1;
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