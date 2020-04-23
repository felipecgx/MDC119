#include <stdlib.h>
#include <stdio.h>
#include <string.h>

contavogais(char *p)
{
    int quantidade = 0;

    while (*p != 0)
    {
        if (strchr("AaEeIiOoUu", *p))
        {
            quantidade++;
            p++;
        }
        else
        {
            p++;
        }
    }
    return (quantidade);
}
int main(int argc, char const *argv[])
{
    int quantidade;
    char frase[50];

    printf("Digite uma frase:");
    scanf("%s", &frase);

    quantidade = contavogais(frase);
    printf("Quantidade de vogais na frase '%s' é %d", frase, quantidade);

    return 0;
}
