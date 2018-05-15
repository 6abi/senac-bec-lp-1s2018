/* ex04.c 
 *
 * Objetivo 
 *
 * 	Resolução de equações do 2o Grau usando a fórmula de Bhaskara
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
#include<math.h>

int main() {

	double a, b, c, x1, x2, delta;

	printf("Entre os valores de 'a', 'b' e 'c'\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	delta = b*b - 4 * a * c;

	printf("\nRaíz(es) de f(x) = %.fx^2 + %.fx + %.f\n\n",a,b,c);

	if ( delta ==  0 ) {

		x1 = (-b + sqrt(delta))/(2*a);
		printf("x = %5.2f\nx2 = %5.2f\n\n", x1, x2);

	} if ( delta > 0 ) { 

		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("x1 = %5.2f\nx2 = %5.2f\n\n", x1, x2);

	} else {

		printf("Não existem raízes reais!\n\n");

	}
}

// ex04.c

