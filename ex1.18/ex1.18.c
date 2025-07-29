#include <stdio.h>
#include <stdlib.h>

int main ( void ) 
{
	
	float area;
	float diagMaior;
	float diagMenor;
	
	printf ( "\n" );
	
	printf ( "Valor da diagonal maior: " );
	scanf ( "%f", &diagMaior );
	
	printf ( "\n" );
	
	printf ( "Valor da diagonal menor: " );
	scanf ( "%f", &diagMenor );
	
	printf ( "\n" );
	
	area = ( diagMaior * diagMenor ) / 2;
	
	printf ( "Area = %.2f\n", area );
	
	return 0;
	
}