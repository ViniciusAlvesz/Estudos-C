//2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main() {
	int a, b, c;

	printf ("digite 3 valores de número inteiro");
	fflush (stdout);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf ("A soma dos 3 valores é: %d", a+b+c);

	return 0;
}
