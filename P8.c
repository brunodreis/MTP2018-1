//Bruno Damasceno Reis (11721EAU008)
//Avaliação Continuada P8
//# MTP2018-1

#include <stdio.h>
#include <stdlib.h>
void gera_numeros(float * vetor, int tam)
{
	float num;
	for(int i = 0; i < tam; i++) vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float soma(float A[], int N)
{
	if (N == 0) return 0;
	else
    {
      float somatorio;
      somatorio = soma(A, N - 1);
      if (A[N - 1] > 0) somatorio += A[N - 1];
      return (somatorio);
    }
}

float produto(float A[], int N)
{
	float produtorio = 1.0f;
	for(int i = 0; i < N; i++) produtorio *= A[i];
	return (produtorio);
}
int main()
{
	srand(123546);
	int escolha, n = 100;
	float vet[n];
	printf("Selecione uma das opcoes: \n1 - Somatorio \n2 - Produtorio");
	scanf("%i", &escolha);
	gera_numeros(vet, n);
	switch (escolha)
	{
		case 1:
			printf("\n%f", soma(vet, n)); break;
		case 2:
			printf("\n%f", produto(vet, n)); break;
		default: return 0;
	}
	return 0;
}
