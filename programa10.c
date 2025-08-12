#include <stdio.h>
//Tipos de dados

//BOOLEANOS (Verdadeiro / Falso) True/False

/*
 * Na linguagem C, não exite um tipo de dado boolean, mas...
 * A linguagem C reconhece o valor 0 como Falso (False), e QUALQUER valor diferente de 0 como Verdadeiro (True)
 */
int main() {
	int booleano = 1; //Iniciando como verdadeiro

	if(booleano){
		printf("Verdadeiro...");
	}else{
		printf("Falso...");
	}

	return 0;
}
