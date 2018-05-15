/* ex01.c 
 *
 * Objetivo 
 *
 * 	Geração da tabela de tabuada para um dado número
 *
 * Compilação
 *
 *	gcc -W -Wall -pedantic -std=c11 ex01.c -o ex01
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

	printf("%2d * %2d = %3d\n", n,  0, n *  0);
	printf("%2d * %2d = %3d\n", n,  1, n *  1);
	printf("%2d * %2d = %3d\n", n,  2, n *  2);
	printf("%2d * %2d = %3d\n", n,  3, n *  3);
	printf("%2d * %2d = %3d\n", n,  4, n *  4);
	printf("%2d * %2d = %3d\n", n,  5, n *  5);
	printf("%2d * %2d = %3d\n", n,  6, n *  6);
	printf("%2d * %2d = %3d\n", n,  7, n *  7);
	printf("%2d * %2d = %3d\n", n,  8, n *  8);
	printf("%2d * %2d = %3d\n", n,  9, n *  9);
	printf("%2d * %2d = %3d\n", n, 10, n * 10);

	puts("");

}

// ex01.c

