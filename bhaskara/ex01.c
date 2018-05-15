/* ex01.c 
 *
 * Objetivo 
 *
 * 	Resolução de equações do 2o Grau usando a fórmula de Bhaskara
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
#include<math.h>

int main() {

	double x1, x2, delta;

	delta = 5*5 - 4 * 1 * 6;

	x1 = (-5 + sqrt(delta))/(2*1);
	x2 = (-5 - sqrt(delta))/(2*1);

	printf("\nRaízes de f(x) = x^2 + 5x + 6\n\n");
	printf("x1 = %5.2f\n", x1);
	printf("x2 = %5.2f\n\n", x2);
}

// ex01.c

