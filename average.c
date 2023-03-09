#include <stdio.h>
#define TAM 5

int main()
{
    int vetor[TAM], i;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o %io. valor: ", i + 1);
        scanf("%i", &vetor[i]);
    };

    for (int i = 0; i < TAM; i+= 2)
    {
        printf("Indice %i: %i", i, vetor[i]);
    }
};