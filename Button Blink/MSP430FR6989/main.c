//Multiple Button LED Toggle
//MSP430FR6989
#include <msp430.h>
#include <msp430FR6989.h>

void main(void)
{

    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer
    PM5CTL0 &= ~LOCKLPM5;       //Stop Default High-Impedance Mode

    P1DIR = 0x00;               //Guarantees Buttons as Inputs

    P1DIR |= BIT0;                   //LED 1
    P9DIR = BIT7;



    P1REN = BIT1 | BIT2;
    P1OUT = BIT1 | BIT2;



    while(1)
    {
    if((P1IN & BIT1) == 0x00)
    {
        P1OUT ^= BIT0;
        while((P1IN & BIT1) == 0x00);

    }
    if((P1IN & BIT2) == 0x00)
    {
        P9OUT ^= BIT7;
        while((P1IN & BIT2) == 0x00);

    }

    }
}
