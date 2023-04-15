#include <stdio.h>
#define MAIOR printf("maior de idade.")
#define MENOR printf("menor de idade.")

/* Questão 4 - Elabore um programa em C, que leia nome e idade e possua macros que eixba mensagens “Maior de Idade”
e/ou menor de idade.
>= 18 anos - Para Maior de Idade
< 18 anos - Para Menor de Idade */

int main()
{

    int idade;
    char nome[20];

    printf("Digite seu nome: ");
    gets(nome);

    printf("\ndigite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18)
    {
        printf("\n%s é ", nome);
        MAIOR;
    }
    else
    {
        printf("\n%s é ", nome);
        MENOR;
    }
}