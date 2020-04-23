#include <stdlib.h>
#include <stdio.h>

int main()
{
    int ano;

    printf("\n Digite um ano: \n ");
    scanf("%d", &ano);
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        printf("\t O ano %d é bissexto", ano);
    }
    else
    {
        printf("\t O ano %d não é bissexto", ano);
    }
    return 0;
}
