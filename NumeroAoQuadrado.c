//3. Leia um número e imprima o resultado do quadrado deste número.

#include <stdio.h>

int main(){
	int inteiro;

	printf ("escreva um número a ser elevado ao quadrado");
	fflush(stdout);

	 if (scanf("%d", &inteiro) == 1) {
		printf ("Seu número ao quadrado é: %d \n", inteiro * inteiro);
	}else {
		printf ("Por favor, informe um número válido \n");
	}


//	scanf ("%d", &inteiro);

//	printf ("seu número ao quadrado é: %d", inteiro * inteiro);


	return 0;
}

/*    if (scanf("%d", &inteiro) == 1) {
 *       printf("Seu número é %d\n", inteiro);
 *   } else {
 *       printf("Não foi identificado um número.\n");
 *   }
 *
 *   return 0;
 *}
 */
