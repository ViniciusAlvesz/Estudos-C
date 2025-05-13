//1. Faça um programa que leia um número inteiro e o imprima.

#include <stdio.h>

int main() {
    int inteiro;
    printf("Escreva um número inteiro\n");
	fflush(stdout);

    if (scanf("%d", &inteiro) == 1) {
        printf("Seu número é %d\n", inteiro);
    } else {
        printf("Por favor, insira um número.\n");
    }

    return 0;
}
