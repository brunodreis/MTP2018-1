//# MTP2018-1 
//Bruno Damasceno Reis
//11721EAU008

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef
	struct Dimensoes
	{
		float largura;
		float profundidade;
		float altura;
	}
Dimensoes_m;
typedef
	struct Produto
	{
		char nome[64];
		float preco;
		Dimensoes_m dimensoes;
	}
Produto_m;
void cadastro(int x, Produto_m p[2])
{
	printf("\nNome: ");
	fgets(p[x].nome, 64, stdin); 
	p[x].nome[strlen(p[x].nome)-1] = '\0';
	printf("\nPreco: ");
	scanf("%f", &p[x].preco);
	getchar();
	printf("\nLargura: ");
	scanf("%f", &p[x].dimensoes.largura);
	getchar();
	printf("\nProfundidade: ");
	scanf("%f", &p[x].dimensoes.profundidade);
	getchar();
	printf("\nAltura: ");
	scanf("%f", &p[x].dimensoes.altura);
	getchar();
}
int main()
{
	int op_1=0, op_2=0, i=0;
	char aux[64];
	Produto_m p[2];
	for (i=0; i<2; i++)
		p[i].nome[0] = '\0';
	do
	{
		printf("\n1 - Cadastro\n2 - Consulta\n....");
		scanf("%d", &op_1);
		getchar();
		switch (op_1)
		{
			case 1:
				printf("\n....1 - Produto 1\n....2 - Produto 2\n........");
				scanf("%d", &op_2);
				getchar();
				printf("\nCadastre as informacoes do produto %d: ", op_2);
				cadastro(op_2-1, p);
				printf("\nProduto %d cadastrado com sucesso", op_2);
				break;
			case 2:
				printf("\nProduto a ser procurado: ");
				scanf("%d", &op_2);
				getchar();
				if (strlen(p[op_2-1].nome) == 0)
					printf("\nProduto nao cadastrado!\n");
				else
					printf("\n%s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm", p[op_2-1].nome, p[op_2-1].preco, p[op_2-1].dimensoes.largura, p[op_2-1].dimensoes.profundidade, p[op_2-1].dimensoes.altura);
				break;
		}
	}while (op_1 == 1 || op_1 == 2);
	return 0;
}
