#include <stdio.h>

//Escreva um programa que declare um intero, inizialize-o com 0, incremente-o de 100 em 100 até cem mil (100000)

int main() {
	int numero = 0;

	do {

		printf ("%d\n", numero);

		numero = numero + 100;

	}

	while (numero < 100000);

}

// OU O CÓDIGO ABAIXO, FEITO PELO PROFESSOR
/*
