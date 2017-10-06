//Multiple Blink
//MSP430G2553 On Board
#include <msp430.h>
#include <msp430G2553.h>


void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer

P1DIR = BIT0 | BIT6;



while(1)
{
    volatile unsigned int count;
   
    if(count % 1000 == 0)
        P1OUT ^= BIT0;

    if(count % 2000 == 0)
	{
		P1OUT ^= BIT6;
		count = 0;
	}
	 count++;
}
}
