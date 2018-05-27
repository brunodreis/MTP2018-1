// # MTP2018-1
// P5
// Bruno Damasceno Reis
// 11721EAU008

#include <stdio.h>

int main()
{	char str[256];
	char *p;
	int i, cont, txt[256], opcao;
	int *ps;
	do{
	do{printf("MENU: \n1 - Criptografar \n2 - Descriptografar \n3 - Sair do programa \nSua opcao eh: ");
	scanf("%d", &opcao);
	getchar();}while(opcao!=1 && opcao!=2 && opcao!=3);
	i = 0;
	switch(opcao)
	{	case 1:
			for(i=0; i<256; i++){ str[i] = '\0'; }
			printf("Digite uma informacao textual: ");
			fgets(str, 256, stdin);
			for(cont=0; str[cont] != '\0'; cont++);	
			ps = (int*)str;
			printf("\nFrase criptografada: \n");
			for(i=0; i<cont; i++)	
			{	if(*(ps+i) != 0 )
				{	printf("%i ", *(ps+i));	}	} 
			break;
			
		case 2:
			printf("Quando quiser encerrar a sequencia de numeros, entre com 0\n");
			p = (char*)txt;
			i=0; cont=0;
			printf("Digite uma sequencia de numeros: \n");
			do
			{	scanf("%d", &cont);
	 			getchar();
				txt[i] = cont;
				i++;
			}while(cont != 0);
			p = (char*)&txt;
			printf("\nFrase descriptografada: \n");
			for(i=0; i<sizeof(txt) && *(p+i) != 0; i++)
			{	printf("%c", *(p+i));		}
			break;

		default:
			break;
	}
	printf("\n\n");
	}while(opcao != 3);
	return 0;
}
