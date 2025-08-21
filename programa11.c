#include <stdio.h>

//Operações Matemáticas

/*
 *  Somar = +  |  Subtrair = - |  Multiplicar = * |  Dividir = / |  Elevar ao quadrado = x * x | Módulo (Resto da divisão de X por Y) = % |
 */

int main() {
	int num1, num2;
	float res, res2;

	printf ("Informe um valor do primeiro número: \n");
	fflush (stdout);
	scanf ("%d", &num1);
	printf ("Informe um valor do segundo número: \n");
	fflush (stdout);
	scanf ("%d", &num2);

	//Soma (+)
	res = num1 + num2;
	printf ("A soma é: %d\n", (int)res);// Chamar um valor INT em um FLOAT é chamado de Cast

	//Subtrair (-)
	res = num2 - num1;
	printf ("A subtração é: %d\n", (int)res);

	//Multiplicar (*)
	res = num1 * num2;
	printf ("A multiplicação é: %d\n", (int)res);

	//Dividir (/)
	res = (float)num2 / (float)num1; // Chamar um valor FLOAT em um INT é chamado de Cast
	printf ("A divisão é: %.2f\n", res);

	//Elevar ao quadrado (**)
	res = num1 * num1;
	res2= num2 * num2;
	printf ("O quadrado de %d é: %d\n", num1, (int)res);
	printf ("O quadrado de %d é: %d\n", num2, (int)res2);

	//Módulo (%) {Verificando se o Num 1 é par ou impar}
	if (num1 % 2 == 0) {
		printf ("%d é PAR\n", num1);
	}else {
		printf ("%d é ÍMPAR\n", num1);
	}

	return 0;
}
