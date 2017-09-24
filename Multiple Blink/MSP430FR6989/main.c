//Multiple Blink
//MSP430FR6989
#include <msp430.h>
#include <msp430FR6989.h>

void main(void)
{

        WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer
        PM5CTL0 &= ~LOCKLPM5;       //Stop Default High-Impedance Mode
        P1DIR = BIT0;            //LED 1
        P9DIR = BIT7;            //LED 2





    while(1)
    {
        volatile unsigned int count;
        
        if(count % 1000 == 0)
            P1OUT ^= BIT0;

        if(count % 2000 == 0)
        {
			P9OUT ^= BIT7;
			count = 0;
		}
		count++;
}

}
