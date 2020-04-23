#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anterior, numero = 0, proximo = 1, i;
    for (i = 1; i <= 10; i++)
    {
        anterior = numero + proximo;
        numero = proximo;
        proximo = anterior;

        printf("\n %i", anterior);
    }
}