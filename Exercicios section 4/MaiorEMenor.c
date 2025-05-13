#include <stdio.h>

//Faça um programa que leia 10 numeros e escreva o maior e menor valor lido.

int main() {
	int numero, maior, menor;

	printf ("Por favor digite o 1º numero: ");
	fflush (stdout);
	scanf ("%d", &numero);

	menor = numero;
	maior = numero;

for (int i = 2; i <=10 ; i++) {
	printf ("Digite o %dº número: ", i);
	fflush (stdout);
	scanf ("%d", &numero);

	if (numero > maior) {
		maior = numero;
	}

	if (numero < menor) {
		menor = numero;
	}
}

	printf("\nMaior número infomado: %d\n", maior);
	printf("Menor número infomado: %d\n", menor);


}
