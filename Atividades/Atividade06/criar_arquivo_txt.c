#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *arquivo;

    arquivo = fopen("arquivo.txt", "a");

    if (arquivo == NULL)
    {
        printf("Impossivel abrir o arquivo");
    }
    printf("Aperte qualquer tecla para finalizar...");
    getchar();

    fclose(arquivo);

    return 0;
}