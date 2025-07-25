#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	int A;
	int B;
	int b;
	int h;
	
	//entrada
	printf ( "\n" );
	
	printf ( "Valor da base maior: " );
	scanf ( "%d", &B );
	
	printf ( "\n" );
	
	printf ( "Valor da base menor: " );
	scanf ( "%d", &b );
	
	printf ( "\n" );
	
	printf ( "Valor da altura: " );
	scanf ( "%d", &h );
	
	printf ( "\n" );
	
	//processamento
	A = ( B + b ) * h / 2;
	
	//saida
	printf ( "Area = %d\n", A );
	
	return 0;
	
}