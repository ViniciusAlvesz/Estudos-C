#include <stdio.h>

int main() {
	int valor = 1;

	while(1) {
		printf("Looping infinito número %d\n", valor);
		valor = valor + 1;
	}

	return 0;
}
