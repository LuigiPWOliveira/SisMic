#include <msp430.h>

void _system_pre_init()
{
	WDTCTL = WDTPW | WDTHOLD;
}
