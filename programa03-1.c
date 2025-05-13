#include <stdio.h>
//Estruturas de repetição, for, while, do...while
//                        para, enquanto, faça...enquanto

/*UTILIZANDO O "FOR"
 * Faça um programa no qual receba e some 5 números inteiros e apresente a soma deles no final;
 */


int main() {
    //variáveis (caso não inicialize a soma  com "= 0" vai dar errado, pois estará pegando uma sujeira de espaço para a variável, caso não declarada, a variável "Numero"
	// não precisa, pois ela será declarada pelo próprio usuário.
	int numero, soma = 0;

	//para o int "i", iniciando em 0; enquanto i < 5; incrementa o i em 1 ("i++" = soma 1 sempre que for realizado o processo)
	// inicialização, critério de parada, forma de incremento
	for(int i = 0; i < 5; i++){
    //entrada
	printf ("Informe um número: \n");
	fflush(stdout);
    scanf ("%d", &numero);

    //processamento
    soma = soma + numero;
   }
    //saída
    printf ("A soma é %d", soma);

    return 0;
}


