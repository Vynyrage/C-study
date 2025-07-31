#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
	
	int bornYear;
	int currYear;
	int res;
	
	printf ( "Digite o ano em que voce nasceu: " );
	scanf ( "%d", &bornYear );
	
	printf ( "Digite o ano atual: " );
	scanf ( "%d", &currYear );
	
	res = currYear - bornYear;
	
	printf ( "Idade aproximada: %d\n", res );
	
	return 0;
	
} 