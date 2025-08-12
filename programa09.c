#include <stdio.h>
/*
 Tipos de dados:

	 Tipos Alfanuméricos:
	  - Characteres;(' ')
	 - Strings*; (" ") {é um conjunto de characteres}

	 * Na linguagem C NÃO existe o tipo de dado "string"
	 * (obs: String é tudo que está entre aspas duplas,ex: "oi"; Já Characteres ficam entre aspas, ex: 'oi'))
*/

int main() {
	//Declaração de uma string em C
	char nome[50]; //Até 49 characteres, pois em C, a própria linguagem pega o nome e adiciona "\0" no final, logo, se eu coloco "Lucas" 5 char, fica "Lucas\0" 6 char

	printf("Qual é seu nome? ");
	fflush (stdout);
	gets(nome); //não muito utilizado, por não ser seguro, substituir gets(nome) POR  fgets(nome, sizeof(nome), stdin)

	printf ("Seu nome é: %s", nome);
}
