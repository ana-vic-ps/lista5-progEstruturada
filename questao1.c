#include <stdio.h>
#define SOMA(a, b) (a + b)
#define SUBT(a, b) (a - b)
#define DIVI(a, b) (a / b)
#define MULT(a, b) (a * b)

/* Questão 1 - Desenvolva um algoritmo em C, que leia dois números inteiros e possua macros que realize as seguintes
operações matemáticas: Somar, Subtrair, Dividir e Multiplicar. */

int main()
{

    float num1, num2, resultado;

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    resultado = SOMA(num1, num2);

    printf("\nSoma = %0.1f", resultado);

    resultado = SUBT(num1, num2);

    printf("\nSubtração = %0.1f", resultado);

    resultado = DIVI(num1, num2);

    printf("\nDivisão = %0.1f", resultado);

    resultado = MULT(num1, num2);

    printf("\nMultiplicação = %0.1f", resultado);
}
