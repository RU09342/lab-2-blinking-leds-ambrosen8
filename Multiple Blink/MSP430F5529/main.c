//Multiple Blink
//MSP430F5529
#include <msp430.h>
#include <msp430F5529.h>


void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   //Stop Watch Dog Timer

P1DIR = BIT0;
P4DIR = BIT7;
P1OUT = 0;
P4OUT = 0;


while(1)
{
    volatile unsigned int count;
   
    if(count % 1000 == 0)
        P1OUT ^= BIT0;

    if(count % 2000 == 0)
	{
        P4OUT ^= BIT7;
		count = 0;
	}
	count++;

}
}