// #MTP2018-1
// BRUNO DAMASCENO REIS
// MATRÍCULA: 11721EAU008

#include <stdio.h>

void bin_dec (char bin[])
{
	int i = 0, dec = 0;
	while(bin[i]) 
	{
		dec = dec*2 + (bin[i] - '0');
		i++;
	}
	printf ("\nO numero digitado em decimal: %d", dec);
}

void bin_hex (char bin[])
{
	int i = 0, dec = 0;
	while(bin[i])
	{
		dec = dec*2 + (bin[i] - '0');
		i++;
	}
	printf ("\nO numero digitado em hexadecimal: %x", dec);
}

int main ()
{
	int op, dec, hex, hex1, oct, cont;
	char bin[256];
	printf(	"\nCONVERSOR DE BASES NUMERICAS:"
	"\n1. Binario para Decimal"
	"\n2. Binario para Hexadecimal"
	"\n3. Hexadecimal para Decimal"
	"\n4. Hexadecimal para Binário"
	"\n5. Decimal para Binario"
	"\n6. Decimal para Hexadecimal"
	"\n7. Octal para Decimal"
	"\n8. Decimal para Octal\n\n\n"
	"Escolha a opcao desejada:");
	scanf ("%d", &op); 
	getchar();
	
	
	if (op == 1) // Bin -> Dec
	{
		printf ("\nDigite um numero em base binaria:");
		scanf ("%s", &bin);
		getchar();
		bin_dec (bin);
	}
	
	else if (op == 2) // Bin -> Hex
	{
		printf ("\nDigite um numero em base binaria:");
		scanf ("%s", &bin);
		getchar();
		bin_hex (bin);
	}
	
	else if (op == 3) // Hex -> Dec
	{
		printf ("\nDigite um numero em base hexadecimal:");
		scanf ("%x", &hex);
		getchar();
		printf ("\nO numero digitado em decimal: %d", hex);
	}
	
	else if (op == 4) // Hex -> Bin
	{
		printf ("\nDigite um numero em base hexadecimal:");
		scanf ("%x", &hex);
		getchar();
		printf ("\nNumero auxiliar: %d", hex);
		printf ("\n\nDigite o numero auxiliar printado acima: ");
		scanf ("%d", &dec);
		getchar();
		itoa(dec,bin,2);
		printf ("\n%d em binario: %s\n", dec,bin);
	}

	
	else if (op == 5) // Dec -> Bin
	{
		printf ("\nDigite um numero em base decimal:");
		scanf ("%d", &dec);
		getchar();
		itoa(dec,bin,2);
		printf ("\n%d em binario: %s\n", dec,bin);
	}
	
	else if (op == 6) // Dec -> Hex
	{
		printf ("\nDigite um numero em base decimal:");
		scanf ("%d", &dec);
		getchar();
		printf ("\nO numero digitado em hexadecimal: %x", dec);
	}
	
	else if (op == 7) // Oct -> Dec
	{
		printf ("\nDigite um numero em base octal:");
		scanf ("%o", &oct);
		getchar();
		printf ("\nO numero digitado em decimal: %d", oct);
	}
	
	else if (op == 8) // Dec -> Oct
	{ 
		printf ("\nDigite um numero em base decimal:");
		scanf ("%d", &dec);
		getchar();
		printf ("\nO numero digitado em octal: %o", dec);
	}
	
	else
	{
		printf ("\nOpcao nao valida.");
	}
	return 0;
}
