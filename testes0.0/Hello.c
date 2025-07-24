#include <stdio.h>
#include <stdlib.h>

int main ( void ) 
{
	char primeiraLetra;
	int idade;
	float peso;
	float altura;
	float imc;
	
	printf( "Por favor digite a primeira letra do seu nome: " );
	scanf(" %c", &primeiraLetra );
	
	printf( "Insira sua idade: " );
	scanf( "%d", &idade );
	
	printf( "Insira seu peso: " );
	scanf( "%f", &peso );
	
	printf( "Insira sua altura: " );
	scanf( "%f", &altura );
	
	imc = peso / ( altura * altura );
	
	printf( "%c, seu IMC e: %.2f", primeiraLetra, imc );
	
	return 0;
}