#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	float perimetro;
	float area;
	float lado;
	
	printf ( "\n" );
	
	printf ( "Valor do lado:  " );
	scanf ( "%f", &lado );
	
	printf ( "\n" );
	
	perimetro = lado * 4;
	area = lado * lado;
	
	printf ( "Primetro = %.2f\n\n", perimetro );
	printf ( "Area = %.2f\n", area );
	
	return 0;
	
}