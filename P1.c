//Bruno Damasceno Reis (11721EAU008)
//Avaliação continuada P1
//# MTP2018-1

#include <stdio.h>

int main ()
{
	int estado=0, i=0; 
	char bits[256];
  
	printf ("Digite um numero binario: ");
	scanf ("%s", bits);
	
	while(bits[i] != '\0') 
	{
		if (estado == 0 && bits[i] == '0')
		{
			estado = 0; 
			i++;
		}
		
		if (estado == 0 && bits[i] != '0') 
		{
			estado = 1;
			i++;
		}
		
		if (estado == 1 && bits[i] == '0')
		{
			estado = 2; 
			i++;
		}
		
		if (estado == 1 && bits[i] != '0')
		{
			estado = 0;
			i++;
		}
		
		if (estado == 2 && bits[i] == '0')
		{
			estado = 1; 
			i++;
		}
		if (estado == 2 && bits[i] != '0')
		{
			estado = 2;
			i++;
		}
		
	}
	
	if (estado == 0)
	{
		printf ("O numero eh multiplo de 3.");
	}
	else 
	{
		printf ("O numero nao eh multiplo de 3.");
	}
	
	printf ("O numero digitado eh: %s", bits);
	return 0;}
