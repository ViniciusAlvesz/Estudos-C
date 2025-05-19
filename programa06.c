#include <stdio.h>
/*
 Tipos de dados:

 Tipos núméricos:
 	 - Inteiros;
 	 - Reais;
 */
int main() {
		//inteiro
	  //int nota1, nota2; //1,2,3...999, ...

		//Reais
		float media, nota1, nota2; //23.4, 1.23, 1.2340, ... (Menos pesado, e mais utilizado que a variável double)
	  //double media, nota1, nota2 -> 23.4, 1.23, 1.2340 (Mais pesado, mas aguenta mais casas decimais do que float)

		printf ("Qual a primeira nota? ");
		fflush (stdout);
		scanf("%f", &nota1);

		printf ("Qual a segunda nota? ");
		fflush (stdout);
		scanf("%f", &nota2);

		media = (nota1 + nota2) / 2;

		printf("Sua média é %.2f", media);

	return 0;
	}
