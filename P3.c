//Bruno Damasceno Reis (11721EAU008)
//Avaliação Continuada P3
//# MTP2018-1

#include <stdio.h>

int main ()
{
	int m, i, e, m1;
	char bin[256], bin1[256], bin2 [256];
	printf ("OPERACOES BINARIAS (BITWISE)\n\n"
	"Escolha a operacao a ser utilizada:\n\n"
	"1. NOT\n"
	"2. AND\n"
	"3. OR\n"
	"4. XOR\n"
	"5. Right Shift\n"
	"6. Left Shift\n\n");
	scanf ("%d", &e);
	
	if (e == 1) // NOT
	{
		printf ("\nDigite um numero:");
		scanf ("%d", &m);
		getchar();
		itoa (m, bin, 2);
		printf ("\nNOT %d (%s)\n", m, bin);
		i = ~m;
		itoa (i, bin2, 2);
		printf ("\n:%d (%s)\n", i, bin2);
	

	}
	
	else if (e == 2) // AND
	{
		printf ("\nDigite um numero:");
		scanf ("%d", &m);
		getchar();
		itoa (m, bin, 2);
		printf ("\nDigite outro numero:");
		scanf ("%d", &m1);
		getchar();
		itoa (m1, bin1, 2);
		printf ("\n%d (%s)\n", m, bin);
		printf ("\nAND %d (%s)\n", m1, bin1);
		i = m&m1;
		itoa (i, bin2, 2);
		printf ("\n:%d (%s)\n", i, bin2);
	}
	
	else if (e == 3) // OR
	{
		printf ("\nDigite um numero:");
		scanf ("%d", &m);
		getchar();
		itoa (m, bin, 2);
		printf ("\nDigite outro numero:");
		scanf ("%d", &m1);
		getchar();
		itoa (m1, bin1, 2);
		printf ("\n%d (%s)\n", m, bin);
		printf ("\nOR %d (%s)\n", m1, bin1);
		i = m|m1;
		itoa (i, bin2, 2);
		printf ("\n:%d (%s)\n", i, bin2);
	}
	
	else if (e == 4) // XOR
	{
		printf ("\nDigite um numero:");
		scanf ("%d", &m);
		getchar();
		itoa (m, bin, 2);
		printf ("\nDigite outro numero:");
		scanf ("%d", &m1);
		getchar();
		itoa (m1, bin1, 2);
		printf ("\n%d (%s)\n", m, bin);
		printf ("\nXOR %d (%s)\n", m1, bin1);
		i = m^m1;
		itoa (i, bin2, 2);
		printf ("\n:%d (%s)\n", i, bin2);	
	}
	
	else if (e == 5) // Right Shift
	{
		int n, dado;
		printf("RIGHT SHIFT\n");
		dado = 0x8000;
		n = 5;
		printf("%04X | >> %d bits | %04X\n", dado, n, dado>>n );
		printf("%04d | >> %d bits | %04d\n", dado, n, dado>>n );

	}
	
	else if (e == 6) // Left Shift
	{
		int n, dado;
		printf("LEFT SHIFT\n");
		dado = 0x0001;
		n = 5;
		printf("%04X | << %d bits | %04X\n", dado, n, dado<<n );
		printf("%04d | << %d bits | %04d\n", dado, n, dado<<n );

	}

	else 
	{
		printf ("Opcao invalida.");
	}
	
	return 0;
}
