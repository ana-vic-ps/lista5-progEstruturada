#include <stdio.h>

/* Questão 2 - Elabora um programa em C, que possua uma função recursiva que calcule o fatorial dos números no
intervalo 30 a 33. */

long long int fatorial(int n);

int main()
{

    for (int num = 30; num <= 33; num++)

        printf("\nFatorial de %i = %lld", num, fatorial(num));
}

long long int fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (fatorial(n - 1) * n);
    }
}