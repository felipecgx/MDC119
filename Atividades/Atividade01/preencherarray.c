#include <stdlib.h>
#include <stdio.h>

int main()
{
    int array[10];
    int i, n;
    for (i = 0; i < 10; i++)
    {
        n = i + 1;
        printf("Digite o %d° numero: ", n);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Elemento %d,", array[i]);
    }
    return 0;
}
