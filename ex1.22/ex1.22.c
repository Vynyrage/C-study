#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	float price;
	float discounted;
	float discount;
	float discountDecimal;
	//float discount = 0.09;
	
	printf ( "\n" );
	
	printf ( "Valor do produto: " );
	scanf ( "%f", &price );
	
	printf ( "\n" );
	
	printf ( "Digite o desconto que deseja aplicar: " );
	scanf ( "%f", &discount );
	
	printf ( "\n" );
	
	discountDecimal = discount / 100.0;
	discounted = price * (1 - discountDecimal);
	
	printf ( "Preco de venda com %.2f%% de desconto: %.2f\n", discountDecimal, discounted );
	
	return 0;
	
}