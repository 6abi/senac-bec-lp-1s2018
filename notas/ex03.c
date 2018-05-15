/* ex03.c 
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

#define NVAL 10   // Número de valores de entrada

int main() {

	double x[NVAL], soma=0.0, media;

	for(int i=0; i < NVAL; i++ ) {
		printf("x%d? ",i); scanf("%lf", &x[i]);
		soma += x[i];    //  soma = soma + x[i];
	}

	media = soma / NVAL;

	printf("\nMédia: %8.2f\n\n", media);

}

// ex03.c

