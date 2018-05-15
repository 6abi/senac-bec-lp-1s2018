/* ex01.c 
 *
 * Objetivo 
 *
 * 	Computar a média de um conjunto de 10 entradas
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

	double x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, media;

	printf("x1?  "); scanf("%lf", &x1);
	printf("x2?  "); scanf("%lf", &x2);
	printf("x3?  "); scanf("%lf", &x3);
	printf("x4?  "); scanf("%lf", &x4);
	printf("x5?  "); scanf("%lf", &x5);
	printf("x6?  "); scanf("%lf", &x6);
	printf("x7?  "); scanf("%lf", &x7);
	printf("x8?  "); scanf("%lf", &x8);
	printf("x9?  "); scanf("%lf", &x9);
	printf("x10? "); scanf("%lf", &x10);

	media = (x1+x2+x3+x4+x5+x6+x7+x8+x9+x10) / 10;	

	printf("\nMédia: %8.2f\n\n", media);

}

// ex01.c

