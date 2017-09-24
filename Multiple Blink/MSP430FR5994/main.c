//Multiple Blink
//MSP430FR5994
#include <msp430.h>
#include <msp430FR5994.h>

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer
    PM5CTL0 &= ~LOCKLPM5;       //Stop Default High-Impedance Mode
P1DIR = BIT0 | BIT1;            //LEDs





while(1)
{
    volatile unsigned int count;
    
    if(count % 1000 == 0)
        P1OUT ^= BIT0;

    if(count % 2000 == 0)
	{  
		P1OUT ^= BIT1;
		count = 0;
	}
	count++;
}

}