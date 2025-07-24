#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	int largura;
	int altura;
	int perimetro;
	int area;
	
	//entrada
	printf ( "\n" );
	
	printf ( "Valor da largura: " );
	scanf ( "%d", &largura );
	
	printf ( "\n" );
	
	printf ( "Valor da altura: " );
	scanf ( "%d", &altura );
	
	printf ( "\n" );
	printf ( "----------\n\n" );
	
	//processamento
	perimetro = 2 * (largura + altura);
	area = largura * altura;
	
	printf ( "Perimetro = %d\n\n", perimetro );
	printf ( "Area = %d\n", area );
	
	return 0;
	
}