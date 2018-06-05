//Bruno Damasceno Reis (11721EAU008)
//Avaliação continuada P6
//# MTP2018-1

#include <stdio.h>

int som(int num[], int a)
{
	int soma = 0, i;
	for(i = 0; i < a; i++)
	{
		soma = soma + num[i];
	}
	return soma;
}
float divisao(float soma, float a)
{
	float media;
	media = soma / a;
	return media;
}
int main()
{
	int a, j, num[20], resultado;
	printf("\nDigite a quantidade de valores (entre 5 e 20): ");
	scanf("%d", &a);
	getchar();
	if(a >= 5 && a <= 20)
	{
	    for(j = 0; j < a; j++)
	    {	
		    printf("Valor %d: ", j+1);
		    scanf("%d", &num[j]);
		    getchar();
	    }
    }
    else
    {
    	printf("Numero digitado invalido. ");
	}
	while(a >= 5 && a <= 20)
	{
	    resultado = som(num, a);
	    printf("\nMedia = %.2f", divisao(resultado, a));
	    return 0;
    }
}
