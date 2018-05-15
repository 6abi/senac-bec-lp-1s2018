/* ex03.c 
 *
 * Objetivo 
 *
 * 	Geração da tabela de tabuada para um dado número
 *
 * Compilação
 *
 *	gcc -W -Wall -pedantic -std=c11 ex03.c -o ex03
 *
 * Autor
 *
 * 	Eduardo Heredia <eduardo.heredia@sp.senac.br>
 */


#include<stdio.h>

int main() {

	int n;  // Número cuja tabulada se quer gerar
	int i;  // Contador

	printf("Qual tabuada deseja? ");

	scanf("%d", &n);

	puts(""); // Pula linha

	printf("Tabuada do %2d\n\n", n);

	i = 0;

	do {

		printf("%2d * %2d = %3d\n", n,  i, n *  i);
		i++;   //  i++ => i = i + 1

	} while (i < 11 );

	puts("");

}

// ex03.c

