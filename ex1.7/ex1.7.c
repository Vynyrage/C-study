#include <stdio.h>
#include <stdlib.h>

int main ( void ) 
{

	int lado;
	int area;
	int perimetro;
	
	printf ( "\n" );
	
	printf ( "Valor do lado : " );
	scanf ( "%d", &lado );
	
	printf ( "\n" );
	
	perimetro = lado * 4;
	area = lado * lado;
	
	printf ( "Perimetro = %d \n", perimetro );
	printf ( "Area = %d \n", area );
	
	return 0;
	
}