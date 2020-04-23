#include <stdlib.h>
#include <stdio.h>

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, j, aux;

    for (i = 0; i < 10; i++)
    {
        printf(" \t %d \n", array[i]);
    }
    j = i - 1;
    for (i = 0; i < j; i++)
    {
        aux = array[i];
        array[i] = array[j];
        array[j] = aux;
        j--;
    }
    printf("\t A array inversa e:\n ");
    for (i = 0; i < 10; i++)
    {
        printf("\t %d \n", array[i]);
    }
}