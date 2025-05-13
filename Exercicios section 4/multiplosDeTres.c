#include <stdio.h>
//faça um programa que determine e mostre os 5 primeiros multiplos de 3, considerando números maiores que 0.



int main() {
	int multiplos = 0;

	printf ("Aqui estão os 5 primeiros múltiplos de 3: \n");

	do {

		multiplos = multiplos + 3;

		printf ("%d\n", multiplos);
	}

	while (multiplos < 15);

}
