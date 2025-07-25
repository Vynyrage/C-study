#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	int A;
	int D;
	int d;
	
	//entrada
	printf ( "\n" );
	
	printf ( "Valor da diagonal maior: " );
	scanf ( "%d", &D );
	
	printf ( "\n" );
	
	printf ( "Valor da diagonal menor: " );
	scanf ( "%d", &d );
	
	printf ( "\n" );
	
	//processamento
	A = ( D * d ) / 2;
	
	//saida
	printf ( "Area = %d\n", A );
	
	return 0;
	
}