#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	float largura;
	float altura;
	float perimetro;
	float area;
	
	printf ( "\n" );
	
	printf ( "Valor da largura: " );
	scanf ( "%f", &largura );
	
	printf ( "\n" );
	
	printf ( "Valor da altura: " );
	scanf ( "%f", &altura );
	
	printf ( "\n" );
	
	perimetro = ( largura + altura ) * 2;
	area = largura * altura;
	
	printf ( "Perimetro = %.2f\n\n", perimetro );
	printf ( "Area = %.2f\n", area );
	
	return 0;
	
}