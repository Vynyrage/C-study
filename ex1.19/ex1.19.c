#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	float diametro;
	float circunferencia;
	float area;
	float raioDoCirculo;
	float pi = 3.141592;
	
	printf ( "\n" );
	
	printf ( "Valor do raio do circulo " );
	scanf ( "%f", &raioDoCirculo );
	
	printf ( "\n" );
	
	diametro = raioDoCirculo * 2;
	circunferencia = ( pi * raioDoCirculo ) * 2;
	area = pi * raioDoCirculo * raioDoCirculo;
	
	
	printf ( "Diametro = %.2f\n\n", diametro );
	printf ( "Circunferencia = %.2f\n\n", circunferencia );
	printf ( "Area = %.2f\n", area );
	
	return 0;
	
}