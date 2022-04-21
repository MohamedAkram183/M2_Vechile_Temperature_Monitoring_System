#include <avr/io.h>
#include "Activity_1.h"


void initialise()
{
    DDRB|=(1<<PB0);
    DDRD&=~(3<<PD0);
    PORTD|=(3<<PD0);
}
