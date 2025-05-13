#include <stdio.h>
//Estrutura de repetição
//do...while  (faça... enquanto)
/*
 * Utilizado quando você precisa de um loop onde não se tenha um número fixo de elementos,
 * mas que tenha um critério de parada, e a condição de parada é checada após a primeira execução.
 *
 * Problema:
 */


int main() {
	//variáveis
	int numero, soma = 0;

	do{
		//entrada
		printf("Informe um número: ");
		scanf("%d", &numero);

		//processamento
		soma = soma + numero;
	}
	//checagem (apenas é feita depois do "do", das entradas, processamento, etc.
	while (numero !=0);

	printf ("A soma é %d", soma);

	return 0;
}
