// Bruno Damasceno Reis (11721EAU008)
// Avaliação Continuada P3
// # MTP2018-1

#include<stdio.h>
void printbits(unsigned int num, int len) 
{
	if(len != 0) 
	{
	printbits(num/2, len-1);
	printf("%d", (num%2));
	}	
}



 int main()
 {
 	int  operacao,i, num,d=1,dec=0,nb ,aux=0,num2,x,y, resultado;
 	char bin[256],argumento2[256];
 	printf("Escolha entre as seguintes opções de Calculo em Bitwise: \n1- NOT"
	 "\n2-AND \n3-OR  \n4-XOR"
	 "\n5-Right Shift  \n6-Left Shift  \n");
    scanf("%d",&operacao);getchar();
	switch(operacao)
	{
		case 1:
			printf("\n\nDigite um numero: ");
			scanf("%d", &x);	getchar();
			printf("\nNOT %d  (", x);
			printbits(x, 32);
			printf(")");
			resultado=~x;
			printf(" : %d (", resultado);
			printbits(resultado, 32);
			printf(")");
			
			break;
		case 2:
		    printf("\n\nDigite o primeiro numero: ");
			scanf("%d", &x);	getchar();
			printf("\n\nDigite o segundo numero: ");
			scanf("%d", &y); getchar();
			printf("\n\n%d (", x);
			printbits(x, 32);
			printf(")");
			printf(" AND %d (", y);
			printbits(y, 32);
			printf(")");
			resultado=x&y;
			printf(" : %d (", resultado);
			printbits(resultado, 32);
			printf(")");
			break;
		case 3:
			printf("\n\nDigite o primeiro numero: ");
			scanf("%d", &x);	getchar();
			printf("\n\nDigite o segundo numero: ");
			scanf("%d", &y); getchar();
			printf("\n\n%d (", x);
			printbits(x, 32);
			printf(")");
			printf(" OR %d (", y);
			printbits(y, 32);
			printf(")");
			resultado=x|y;
			printf(" : %d (", resultado);
			printbits(resultado, 32);
			printf(")");
			
			break;
		case 4:
			printf("\n\nDigite o primeiro numero: ");
			scanf("%d", &x);	getchar();
			printf("\n\nDigite o segundo numero: ");
			scanf("%d", &y); getchar();
			printf("\n\n%d (", x);
			printbits(x, 32);
			printf(")");
			printf(" AND %d (", y);
			printbits(y, 32);
			printf(")");
			resultado=x^y;
			printf(" : %d (", resultado);
			printbits(resultado, 32);
			printf(")");
			
			break;
		case 5:
			printf("\n\nDigite o primeiro numero: ");
			scanf("%d", &x);	getchar();
			printf("\n\nDigite o segundo numero: ");
			scanf("%d", &y); getchar();
			printf("\n\n%d (", x);
			printbits(x, 32);
			printf(")");
			printf(" >> %d (", y);
			printbits(y, 32);
			printf(")");
			resultado=x>>y;
			printf(" : %d (", resultado);
			printbits(resultado, 32);
			printf(")");
		    
			break;
		case 6:
			printf("\n\nDigite o primeiro numero: ");
			scanf("%d", &x);	getchar();
			printf("\n\nDigite o segundo numero: ");
			scanf("%d", &y); getchar();
			printf("\n\n%d (", x);
			printbits(x, 32);
			printf(")");
			printf(" << %d (", y);
			printbits(y, 32);
			printf(")");
			resultado=x<<y;
			printf(" : %d (", resultado);
			printbits(resultado, 32);
			printf(")");
				
		    break;

		default:
            printf("Opcao Invalida\n");
            break;
	 }
	 return 0;	 
 }
