#include <stdio.h>
#define MEDIA(a, b, c, d) (a + b + c + d) / 4

/* Questão 3 - Desenvolva um algoritmo em C, que leia quatro números inteiros e possua macros que calcule a média dos
números. */

int main()
{

    int n1, n2, n3, n4, media;

    printf("Digite quatro números: ");
    scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

    media = MEDIA(n1, n2, n3, n4);

    printf("\nA média dos números digitados é: %i", media);
}
