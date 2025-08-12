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
	char opcao;
	printf ("Informe uma opção: \n");
	printf ("A - Saldo da conta \n");
	printf ("B - Extrato da conta \n");
	printf ("C - Limite da conta \n");
	fflush (stdout);
    scanf("%c", &opcao);

    if (opcao == 'a') {
    	printf("Seu saldo é X");
    }else if (opcao == 'b'){
    	printf("Extrato da conta Y");
    }else if (opcao == 'c'){
    	printf ("Seu limite é Z");
    }else {
    	printf("Por favor, selecione uma das opçõe possíveis");
    }

    return 0;
}
