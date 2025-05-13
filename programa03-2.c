#include <stdio.h>
//Estrutura de repetição
//While

/*
 * Utilizado quando se precisa de um loop onde não se tenha um número fixo de elementos, mas que tenha um critério de parada,
 * e antes de ser inicializado o loop, a condição é checada.
 *
 * problema: Faça um programa no qual receba e some números inteiros, até que o número de entrada seja 0, e apresente a soma no final;
 */

int main() {
	//variáveis
	int numero, soma = 0;

	//entrada
	printf("Informe um número");
	scanf("%d", &numero);

	while (numero != 0) {
		soma = soma + numero;
	    //entrada
	    printf("informe um número: ");
	    scanf ("%d", &numero);
	}

	printf ("A soma é %d", soma);

	return 0;
}
