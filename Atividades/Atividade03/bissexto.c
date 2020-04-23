#include <stdio.h>
#include <stdlib.h>

is_bissexto(int i)
{
    int bissexto;
    if ((i % 4 == 0) && (i % 100 != 0))
    {
        bissexto = 1;
    }
    else if (i % 400 == 0)
    {
        bissexto = 1;
    }
    else
    {
        bissexto = 0;
    }
}
int main(int argc, char const *argv[])
{
    int res;
    int ano;
    printf("\nAno:");
    scanf("%d", &ano);

    res = is_bissexto(ano);

    if (res == 1)
    {
        printf("\n%d e um ano bissexto \n", ano);
    }
    else
    {
        printf("\n%d nao e um ano bissexto \n", ano);
    }

    return 0;
}
