#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	float area;
	float base;
	float altura;
	
	printf ( "\n" );
	
	printf ( "Valor da base: " );
	scanf ( "%f", &base );
	
	printf ( "\n" );
	
	printf ( "Valor da altura " );
	scanf ( "%f", &altura );
	
	printf ( "\n" );
	
	printf ( "O resultado toral sera:\n\n" );
	
	area = ( base * altura ) / 2;
	
	printf ( "Area = %.2f\n", area );
	
	return 0;
	
}