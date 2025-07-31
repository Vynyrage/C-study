#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	int numeroUm;
	int numeroDois;
	int res;
	int media;
	
	printf ( "\n" );
	
	printf ( "Primeiro numero: " );
	scanf ( "%d", &numeroUm );
	
	printf ( "\n" );
	
	printf ( "Segundo numero: " );
	scanf ( "%d", &numeroDois );
	
	printf ( "\n" );
	
	res = numeroUm + numeroDois;
	media = res / 2;
	
	printf ( "Media aritmetica: %d\n", media );
	
	return 0;
	
}