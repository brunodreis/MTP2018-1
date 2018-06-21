// #MTP2018-1
// BRUNO DAMASCENO REIS
// MATRÍCULA: 11721EAU008

#include<stdio.h>
void decimalbinario(int num)
{
	int aux=0,nb;
	char bin[100];
	for(nb = 0; num >= (1 << nb); nb++);
    for (aux = nb-1; aux >= 0; aux--) {
        if (num % 2 == 0) {
            bin[aux] = 0;
        }
        else {
            bin[aux] = 1;
        }
        num = num / 2;
    }
 printf ("\nnumero binario:  ");
    for (aux = 0; aux <= nb-1; aux++) {
        printf("%d", bin[aux]);
    }
}




 int main()
 {
 	int  operacao,i, num,d=1,dec=0;
 	printf("Escolha entre as seguintes opções de conversao:\n1- Binario para Decimal"
	 "\n2-Binario para hexadecimal \n3-Hexadecimal para Decimal  \n4-Hexadecimal para Binario"
	 "\n5-Decimal para Binario  \n6-Decimal para Hexadecimal  \n7-Octal para Decimal \n8-Decimal para octal\n ");
    scanf("%d",&operacao);getchar();
	switch(operacao)
	{
		case 1:
			printf("\nDigite o numero em Binario:  ");
			scanf("%d",&num);
			for(i=0; num>0; i++)
            {
                 dec = dec + d * (num % 10);
                 num = num / 10;
                 d=d*2;
                 
            }
             printf("\nO numero binario  em decimal e  %d", dec);
			break;
		case 2:
			printf("\nDigite o numero em Binario:  ");
			scanf("%d",&num);
			d=1;dec=0;
			for(i = 0; num > 0; i++)
            {
                 dec = dec + d * (num % 10);
                 num = num / 10;
                 d=d*2;
            }
            printf("\nO numero binario em Hexadecimal e  %x", dec);
			break;
		case 3:
			printf("\nDigite o numero em Hexadecimal:  ");
			scanf("%x",&num);
			printf("\nO numero %x em Decimal e %d",num,num);
			break;
		case 4:
			printf("\nDigite o numero em Hexadecimal:  ");
			scanf("%x",&num);
			decimalbinario(num);
			break;
		case 5:
		    printf("\nDigite o numero em Decimal:  ");
		    scanf("%d",&num);
		    decimalbinario(num);
			break;
		case 6:
			printf("\nDigite o numero em Decimal:  ");
			scanf("%d",&num);
			printf("\nO numero %d em Hexadecimal e %x",num,num);			
		    break;
		case 7:
			printf("\nDigite o numero em Octal:  ");
			scanf("%o",&num);
			printf("\nO numero %o em Decimal e %d",num,num);
			break;
		case 8:
			printf("\nDigite o numero em Decimal:  ");
			scanf("%d",&num);
			printf("\nO numero %d em Octal e %o",num,num);
			break;
		default:
            printf("Opcao Invalida\n");
            break;
	 }
	 return 0;	 
 }
