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
	int i;

	printf("Qual tabuada deseja? ");

	scanf("%d", &n);

	puts(""); // Pula linha

	printf("Tabuada do %2d\n\n", n);

	i = 0;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	printf("%2d * %2d = %3d\n", n,  i, n *  i);
	i = i + 1;

	puts("");

}

// ex01.c

