/* ex02.c 
 *
 * Objetivo 
 *
 * 	Computar a média de um conjunto de 10 entradas
 *
 * Compilação
 *
 *	gcc -W -Wall -pedantic -std=c11 ex02.c -o ex02
 *
 * Autor
 *
 * 	Eduardo Heredia <eduardo.heredia@sp.senac.br>
 */


#include<stdio.h>

#define NVAL 10   // Número de valores de entrada

int main() {

	double x[NVAL], media;

	printf("x0? "); scanf("%lf", &x[0]);
	printf("x1? "); scanf("%lf", &x[1]);
	printf("x2? "); scanf("%lf", &x[2]);
	printf("x3? "); scanf("%lf", &x[3]);
	printf("x4? "); scanf("%lf", &x[4]);
	printf("x5? "); scanf("%lf", &x[5]);
	printf("x6? "); scanf("%lf", &x[6]);
	printf("x7? "); scanf("%lf", &x[7]);
	printf("x8? "); scanf("%lf", &x[8]);
	printf("x9? "); scanf("%lf", &x[9]);

	media = (x[0]+x[1]+x[2]+x[3]+x[4]+x[5]+x[6]+x[7]+x[8]+x[9]) / NVAL;

	printf("\nMédia: %8.2f\n\n", media);

}

// ex02.c

