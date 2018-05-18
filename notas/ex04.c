/* ex04.c 
 *
 * Objetivo 
 *
 * 	Computar a média de um conjunto de 10 entradas
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
#define NVAL 10   // Número de valores de entrada

int main() {

	double x[NVAL], soma=0.0, media;
	int nrcasos, caso=1;

	scanf("%d", &nrcasos);
	printf("\nCalcularei %d casos: \n\n", nrcasos);

	while( caso <= nrcasos ) {
		soma = 0.0;
		for(int i=0; i < NVAL; i++ ) {
			scanf("%lf", &x[i]);
			soma += x[i];
		}
		media = soma / NVAL;
		printf("Caso %d => Média: %8.2f\n", caso, media);
		caso++;
	}

	puts(""); // pula linha

}

// ex04.c

