#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	float diametro;
	float circunferencia;
	float area;
	float raioDoCirculo;
	float pi = 3.141592;
	
	printf ( "Valor do raio do circulo " );
	scanf ( "%f", &raioDoCirculo );
	
	diametro = raioDoCirculo * 2;
	circunferencia = ( pi * raioDoCirculo ) * 2;
	area = ( pi * raioDoCirculo ) + 2;
	
	printf ( "Diametro = %.2f\n", diametro );
	printf ( "Circuferencia = %.2f\n", circunferencia );
	printf ( "Area = %.2f\n", area );
	
	return 0;
	
}