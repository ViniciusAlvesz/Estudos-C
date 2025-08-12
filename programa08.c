#include <stdio.h>

int main() {
/*
 Tipos de dados:

	 Tipos Alfanuméricos:
	  - Characteres;(' ')
	 - Strings*; (" ") {é um conjunto de characteres}

	 * Na linguagem C NÃO existe o tipo de dado "string"
	 * (obs: String é tudo que está entre aspas duplas,ex: "oi"; Já Characteres ficam entre aspas, ex: 'oi'))
*/
//GERAR UM ALFABETO COMPLETO COM UM LOOP UTILIZANDO DE ENUMERAÇÕES DECIMAIS, REFERENTES À TABELA ASCII
	for(int i = 97; i <= 122 ; i++){
		printf("%c\n", i);
	}

	return 0;
}
