#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	float value;
	
	printf ( "Insira um valor w/e: " );
	scanf ( "%f", &value );
	
	printf ( "%f\n", value );
	
	printf ( "%.2f\n", value );
	
	printf ( "%.3f\n", value );
	
	return 0;
}