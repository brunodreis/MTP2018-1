//Bruno Damasceno Reis (11721EAU008)
//Avaliação continuada P7
//# MTP2018-1

#include <stdio.h>

int funcao(int m, int n)
{
	int i;
	if(m == 0)
	{
		return n+1;
    }
    else if(m >0 && n == 0)
    {
    	return funcao(m-1, 1);
	}
	else if(m > 0 && n > 0)
	{
		return funcao(m-1, funcao(m, n-1));
	}	
}
int main()
{
	int m, n;
	printf("Digite o valor de m: ");
	scanf("%d", &m);
	getchar();
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	getchar();
    printf("\n\nResultado da funcao: %d", funcao(m,n));
    return 0;
}
