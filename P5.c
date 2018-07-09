// # MTP2018-1
// Bruno Damasceno Reis
// 11721EAU008

#include <stdio.h>
#include <locale.h>


int main()
{
	int j , i, codif[64], *numeros;
	char msg[256], *mensagem;
	
	setlocale(LC_ALL, "Portuguese");
	for(i = 0; i < 256; i++) msg[i] = '\0';
	printf("\t1. Codificar\n\t2. Decodificar\n\n\t");
	scanf("%d",&j);
	getchar();
	
	switch(j)
	{
		
		case 1:{
			printf("\n\tEntre com uma frase de até 255 caracteres: \n\t"); 
			scanf("%s", msg);
			char *mensagem= msg;
			printf("\n\tFrase codificada:\n\t");
			
			for(i = 0; msg[i] ;i++)
			{
				numeros = (int*)mensagem;
				if(numeros[i]!= 0) printf("%d",numeros[i]);
				if(numeros[i+1]!= 0) printf(", ");}
			break;
		}
		
		case 2:
		{
			printf("\t\nDigite os numeros (max.: 64), sendo o ultimo entre 1 e 4095.\n   \t\tObs:Digite 0 p/ finalizar a entrada\n\n");
			
			for(i = 0; i < 64; i++)
			 {
				printf("n%d:\t ", i+1); 
				scanf("%d", &codif[i]);
				mensagem = (char*)codif;
				if(codif[i]==0) 
				break;
			 }
			 
			 printf("\n\n\tFrase decodificada: %s", mensagem);
	    }
			
	}
	return 0;
}
