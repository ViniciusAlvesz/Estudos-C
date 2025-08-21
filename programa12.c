#include <stdio.h>
//Vetores Parte 1 (Vetor é um ARRAY UNIDIMENSIONAL)->
//"char nome [50]"; tem apenas uma dimensão, que são 50 caractéres.
//OBS: CARACTERE = 'I'   /  String = "oi, eu posso escrever mais de um caractere"
int main(){
	//VETORES E STRINGS
	char nome[50];
	printf("Qual é o seu nome?");
	fflush (stdout);
	gets (nome);
	printf("Olá, %s\n", nome);

	//VETORES E CARACTERES
	char letras[26]; //0...25
	int contador = 0;
	for (int i = 97; i <= 122; i++){
		letras[contador] = i;
		contador = contador + 1;
	}
	//imprimindo as letras e seus valores em decimal
	for (int i = 0; i < 26; i++){
		printf ("%d == %c\n", letras[i], letras[i]);
	}

	//char l = 'l';
	//char a = 97;

	return 0;
}
