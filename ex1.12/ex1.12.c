#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	float valor;
	
	printf ( "Insira um valor w/e: " );
	scanf ( "#f", &valor );
	
	valor = valor;
	
	printf ( "%f\n", valor );
	
	printf ( "%.2f\n", valor );
	
	printf ( "%.3f\n", valor );
	
	return 0;
}