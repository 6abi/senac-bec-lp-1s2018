/* desafio.c 
 *
 * Objetivo 
 *
 * 	Resolução do item 6.2 da Apostila 42
 *
 * Compilação
 *
 *	gcc -W -Wall -pedantic -std=c11 desafio.c -o desafio
 *
 * Autor
 *
 * 	Eduardo Heredia <eduardo.heredia@sp.senac.br>
 */


#include<stdio.h>
#define NAVAL 4   // Número avaliações, sem considerar a substitutiva

int main() {

	double nota[NAVAL], peso[NAVAL], soma, somapeso, media;
	char aluno[16], fezsub;
	int nrcasos, caso=1;

	// Leitura do número de casos
	scanf("%d", &nrcasos);

	// Leitura dos pesos
	somapeso = 0.0;
	for(int i=0; i < NAVAL; i++) {
		scanf("%lf", &peso[i]);
		somapeso += peso[i];
	}

	while( caso <= nrcasos ) {
		scanf("%s",aluno);     // Obtém nome no aluno
		soma = 0.0;
		for(int i=0; i < NAVAL; i++ ) {
			// Faz leitura da nota dos alunos
			scanf("%lf", &nota[i]);
			soma += nota[i]*peso[i];
		}
		media = soma / somapeso;
		if( media >= 6.0 ) {
			printf("%-15s: APROVADO  com média %5.1f\n", aluno, media);
		} else {
			printf("%-15s: REPROVADO com média %5.1f\n", aluno, media);
		}
		caso++;
	}

	puts(""); // pula linha

}

// desafio.c

