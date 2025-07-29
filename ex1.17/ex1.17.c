#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	float area;
	float baseMaior;
	float baseMenor;
	float altura;
	
	printf ( "\n" );
	
	printf ( "Valor da base maior: " );
	scanf ( "%f", &baseMaior );
	
	printf ( "\n" );
	
	printf ( "Valor da base menor: " );
	scanf ( "%f", &baseMenor );
	
	printf ( "\n" );
	
	printf ( "Valor da altura: " );
	scanf ( "%f", &altura );
	
	printf ( "\n" );
	
	area = (baseMaior + baseMenor) * altura / 2;
	
	printf ( "Area = %.2f\n", area );
	
	return 0;
	
}