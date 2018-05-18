
/* ex05.c 
 *
 * Objetivo 
 *
 * 	Resolução do item 5.1 da Apostila 42
 *
 * Compilação
 *
 *	gcc -W -Wall -pedantic -std=c11 ex05.c -o ex05
 *
 * Autor
 *
 * 	Eduardo Heredia <eduardo.heredia@sp.senac.br>
 */


#include<stdio.h>
#define NAVAL 4   // Número avaliações, sem considerar a substitutiva

int main() {

	double nota[NAVAL], notasub, menornota, soma, media;
	char aluno[16], fezsub;
	int nrcasos, caso=1;

	scanf("%d", &nrcasos);

	while( caso <= nrcasos ) {
		scanf("%s",aluno);     // Obtém nome no aluno
		scanf(" %c",&fezsub);  // Aluno fez avaliação substitutiva? (observe espaço em " %c")
		soma = 0.0;
		for(int i=0; i < NAVAL; i++ ) {
			// Faz leitura da nota dos alunos
			scanf("%lf", &nota[i]);
			soma += nota[i];
		}
		if(fezsub=='S') {
			// Se o aluno fez SUB, lê esta nota
			scanf("%lf", &notasub); 
			// Troca menor nota do aluno pela nota da SUB
			menornota = nota[0];
			for(int i=1; i < NAVAL; i++ ) {
				if(nota[i] < menornota) {
					menornota = nota[i];
				}
			}
			soma -= menornota; // desconta a menor nota
			soma += notasub;   // acrescenta a nota da SUB
		}
		media = soma / NAVAL;
		if( media >= 6.0 ) {
			printf("%-15s: APROVADO  com média %5.2f\n", aluno, media);
		} else {
			printf("%-15s: REPROVADO com média %5.2f\n", aluno, media);
		}
		caso++;
	}

	puts(""); // pula linha

}

// ex05.c

