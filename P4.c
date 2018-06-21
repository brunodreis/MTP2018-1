// Bruno Damasceno Reis (11721EAU008)
// Avaliação Continuada P4
// # MTP2018-1

#include <stdio.h>

int main ()
{
char bits[256];
int cum=0, i;

printf ("Digite um numero: ");
scanf ("%s", bits);
getchar();
for (i=0; bits[i] != '\0'; i++)
	{
	if(bits[i] >=48 && bits[i]<=57)
	{
		bits[i]=bits[i]-'0';
		cum= cum*10 + bits[i];
	}

}
printf ("O numero digitado: %d", cum);
return 0;
}
