/* ex04.c 
 *
 * Objetivo 
 *
 * 	Geração da tabela de tabuada para um dado número
 *
 * Compilação
 *
 *	gcc -W -Wall -pedantic -std=c11 ex04.c -o ex04
 *
 * Autor
 *
 * 	Eduardo Heredia <eduardo.heredia@sp.senac.br>
 */


#include<stdio.h>

int main() {

	int n;  // Número cuja tabulada se quer gerar

	printf("Qual tabuada deseja? ");

	scanf("%d", &n);

	puts(""); // Pula linha

	printf("Tabuada do %2d\n\n", n);

	for( int i=0; i<11; i++ ) {

		printf("%2d * %2d = %3d\n", n,  i, n *  i);

	} 

	puts("");

}

// ex01.c

