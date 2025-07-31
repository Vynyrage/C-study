#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	float time, inssDiscount, salarioLiquido;
	int classes;
	float res, resDisc;
	
	printf ( "Valor da hora/aula: " );
	scanf ( "%f", &time );
	
	printf ( "Quantidade de aulas: " );
	scanf ( "%d", &classes );
	
	printf ( "porcentagem de desconto do INSS: " );
	scanf ( "%f", &inssDiscount );
	
	res = time * classes;
	resDisc =  inssDiscount / 1 ;
	salarioLiquido = res * ( 1 - resDisc );
	
	printf ( "Salario Liquido: %.2f", salarioLiquido );
	
	return 0;
	
}