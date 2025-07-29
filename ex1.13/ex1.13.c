#include <stdio.h>
#include <stdlib.h>

int main ( void ) 
{
	
	float numeroUm;
	float numeroDois;
	
	float adi;
	float sub;
	float multP;
	float div;
	
	printf ( "\n" );
	
	printf ( "Primeiro numero: " );
	scanf ( "%f", &numeroUm );
	
	printf ( "\n" );
	
	printf ( "Segundo numero: " );
	scanf ( "%f", &numeroDois );
	
	printf ( "\n" );
	
	adi = numeroUm + numeroDois;
	sub = numeroUm - numeroDois;
	multP = numeroUm * numeroDois;
	div = numeroUm / numeroDois;
	
	printf ( "%.2f + %.2f = %.2f\n\n", numeroUm, numeroDois, adi );
	printf ( "%.2f - %.2f = %.2f\n\n", numeroUm, numeroDois, sub );
	printf ( "%.2f * %.2f = %.2f\n\n", numeroUm, numeroDois, multP );
	printf ( "%.2f / %.2f = %.2f\n\n", numeroUm, numeroDois, div );
	
	return 0;
	
}