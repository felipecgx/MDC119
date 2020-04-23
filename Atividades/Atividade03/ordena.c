#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b)
{
    return a > b;
}
int menor(int a, int b)
{
    return a < b;
}
void ordena(int *p, int (*funcao)(int a, int b))
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if ((*funcao)(p[i], p[j]))
            {
                int aju = p[i];
                p[i] = p[j];
                p[j] = aju;
            }
        }
    }
}

void imprimir(int *v)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d,", v[i]);
    }
}

int main()
{
    int vetor[] = {1, 6, 4, 9, 0, 8, 2, 3, 5, 7};

    ordena(vetor, maior);

    printf("\n");
    imprimir(vetor);

    ordena(vetor, menor);
    printf("\n\n");
    imprimir(vetor);
    printf("\n");

    return 0;
}