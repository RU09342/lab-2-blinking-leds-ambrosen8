//Multiple Button LED Toggle
//MSP430FR5994
#include <msp430.h>
#include <msp430FR5994.h>

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer
    PM5CTL0 &= ~LOCKLPM5;       //Stop Default High-Impedance Mode

    P1DIR = BIT0 | BIT1;                   //LEDs
    P5DIR = 0x00;               //Guarantees Buttons as Inputs

    P5REN = BIT5 | BIT6;
    P5OUT = BIT5 | BIT6;



    while(1)
    {
    if((P5IN & BIT6) == 0x00)
    {
        P1OUT ^= BIT0;
        while((P5IN & BIT5) == 0x00);

    }
    if((P5IN & BIT5) == 0x00)
    {
        P1OUT ^= BIT1;
        while((P5IN & BIT6) == 0x00);

    }

    }
}
