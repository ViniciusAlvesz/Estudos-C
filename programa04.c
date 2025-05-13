#include <stdio.h>
/* SWITCH
 *	Usamos o switch em casos onde tenhamos uma estrutura grande ou confusa de if/else/if else
 *
 *  #PseudoCódigo
 *
 *	escolha(variável)
 *  INÍCIO
 *  	Caso valor1:
 *  		instrucoes1
 *	    Caso valor2:
 *	    	instrucoes2
 *	    	...
 *  FIM
 *
 * NA LINGUAGEM EM C:
 *
 *	switch (variável) {
 *		case valor1:
 *			instrucoes1
 *			break;			 (Para cada instrução case, se utiliza um "break", caso não, ele executa cada um dos outros cases, incluindo o default
 *		case valor2:
 *			instrucoes2;
 *			break;
 *		default              (default é o valor que, caso o valor 1 nem 2 apareçam ele vai constar, o valor padrão
 *			instrucoes;
 */
int main () {
	int valor;

	printf("Digite um valor de 1 a 7: \n");
	fflush (stdout);
	scanf("%d", &valor);

	switch(valor) {
	case 1:
		printf("Hoje é domingo\n");
		break;

	case 2:
		printf("Hoje é segunda\n");
		break;

	case 3:
		printf("Hoje é terça\n");
		break;

	case 4:
		printf("Hoje é quarta\n");
		break;

	case 5:
		printf("Hoje é quinta\n");
		break;

	case 6:
		printf("Hoje é sexta\n");
		break;

	case 7:
		printf("Hoje é sábado\n");
		break;

	default:
		printf("Valor inválido");
	}


}
