//Simple Blink
//MSP430F5529
#include <msp430.h>
#include <msp430F5529.h>

void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	//Stop Watch Dog Timer

P1DIR = BIT0;
P1OUT = 0;



while(1)
{
    P1OUT ^= 0x01;              //Toggle P1.0
  _delay_cycles(1000000);
}

}
