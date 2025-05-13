//Aula sobre variáveis
#include <stdio.h>

int main(){// INÍCIO DO BLOCO      a chave delimita um bloco de código
	//declarando variáveis
	int idade; //inteiro

	//declarando e inicializando variáveis
	//int idade = 0;

	printf("Qual é a sua idade?\n"); //o ponto e vírgula finaliza um comando.
	fflush(stdout);
	//Receber dados
	scanf("%d", &idade); //2 parâmetros, %d recebe um número inteiro, &idade armazenao valor informado (o & é necessário para a variável)

	printf("A sua idade é %d", idade);

	return 0;
}// FIM DO BLOCO
