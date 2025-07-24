#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	int numeroUm;
	int numeroDois;
	
	//resultados
	int adiRes;
	int multRes;
	int subRes;
	int divRes;
	//float divRes = numeroUm / numeroDois;
	int modRes;
	
	
	//entrada
	printf ( "\n" );
	
	printf ( "Insira um numero inteiro por favor: " );
	scanf ( "%d", &numeroUm );
	
	printf ( "\n" );
	
	printf ( "Insira outro numero inteiro por favor: " );
	scanf ( "%d", &numeroDois );
	
	printf ( "\n" );
	
	
	//processamento
	adiRes = numeroUm + numeroDois;
	multRes = numeroUm * numeroDois;
	subRes = numeroUm - numeroDois;
	divRes = numeroUm / numeroDois;
	modRes = numeroUm % numeroDois;
	
	printf ( "O resultado: %d + %d = %d\n\n",
				numeroUm, numeroDois, adiRes );
				
	printf ( "O resultado: %d * %d = %d\n\n",
				numeroUm, numeroDois, multRes );
				
	printf ( "O resultado: %d - %d = %d\n\n",
				numeroUm, numeroDois, subRes );
				
	printf ( "O resultado: %d / %d = %d\n\n",
				numeroUm, numeroDois, divRes );
	
	printf ( "O resultado: %d %% %d = %d\n",
				numeroUm, numeroDois, modRes );
	
	return 0;
}