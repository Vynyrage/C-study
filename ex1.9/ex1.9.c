#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	int area;
	int base;
	int altura;
	
	//entrada
	printf ( "\n" );
	
	printf ( "Valor da base: " );
	scanf ( "%d", &base );
	
	printf ( "\n" );
	
	printf ( "Valor da altura " );
	scanf ( "%d", &altura );
	
	printf ( "\n" );
	
	//processo
	area = (base * altura) / 2;
	
	printf ( "Area = %d\n", area );
	
	return 0;
	
	
}