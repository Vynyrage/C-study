#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	int numeroInt;
	int res;
	int numeroSucess;
	int numeroAntess;
	
	printf ( "\n" );
	
	printf ( "Forneca um numero inteiro: " );
	scanf ( "%d", &numeroInt );
	
	printf ( "\n" );
	
	numeroSucess = numeroInt + 1;
	numeroAntess = numeroInt - 1;
	
	printf ( "\n" );
	
	printf ( "Sucessor de %d: %d\n\n", numeroInt, numeroSucess );
	
	printf ( "Antecessor de %d: %d\n", numeroInt, numeroAntess );
	
	return 0;
	
}