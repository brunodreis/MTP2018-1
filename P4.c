// P4
// Bruno Damasceno Reis
// 11721EAU008

#include <stdio.h>

int main() 
{
	int ac = 0, i;
	char num[256];

	printf ("Digite um numero: ");
	scanf ("%s", &num);
	getchar ();
	
	for (i=0; num[i] != '\0'; i++)
	{
		if (num[i] >=48 && num[i] <= 57)
		{
			num[i] = num[i] - '0';
			ac = ac*10 + num[i];
		}
	}
	
	printf ("\nO numero digitado: %d", ac);
	return 0;
}
