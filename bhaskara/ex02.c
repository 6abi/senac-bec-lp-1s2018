/* ex02.c 
 *
 * Objetivo 
 *
 * 	Resolução de equações do 2o Grau usando a fórmula de Bhaskara
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
#include<math.h>

int main() {

	double a=1, b=5, c=6, x1, x2, delta;

	delta = b*b - 4 * a * c;

	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);

	printf("\nRaízes de f(x) = %.fx^2 + %.fx + %.f\n\n",a,b,c);
	printf("x1 = %5.2f\n", x1);
	printf("x2 = %5.2f\n\n", x2);
}

// ex02.c

