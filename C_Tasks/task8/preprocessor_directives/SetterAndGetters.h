#include <stdio.h>
#define CLR_BIT( VAR , BIT_POS ) ( (VAR) &= ~( 1<<(BIT_POS) ) )
#define SET_BIT( VAR , BIT_POS ) ( (VAR) |= ( 1<<(BIT_POS) ) )
#define TOGGLE_BIT( VAR , BIT_POS ) ( (VAR) ^= ( 1<<(BIT_POS) ) )
#define GET_BIT( VAR , BIT_POS ) ( ( ( (VAR)>>(BIT_POS) )&0X01 ) )
