#include <stdio.h>

int main()
{

    FILE *arq;

    arq = fopen("/home/felipe/MDC119/Atividades/Atividade06/arquivoBIN.bin", "wb");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo");
    }
    printf("Pressione uma tecla para finalizar..");
    getchar();

    if (!feof(arq))
    {
        printf("Fim do arquivo encontrado");
        return 1;
    }

    fclose(arq);

    return 0;
}