#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union u_produto {
    char nome[30];
    float preco;
    float volume;
    float peso;
};
struct s_produto
{
    char nome[30];
    float preco;
    float volume;
    float peso;
};

int main(int argc, char const *argv[])
{
    union u_produto produto1;
    printf("tamanho do produto1: %d\n", sizeof(produto1));

    struct s_produto produto2;
    printf("tamanho do produto2: %d\n", sizeof(produto2));

    struct s_item
    {
        char nome[30];
        float preco;
        union peso_volume {
            float peso;
            float volume;
        };
    };

    union peso_volume produto3;
    union peso_volume produto4;

    produto3.peso = 50.0;
    produto4.volume = 40.55;

    printf("Tamanho do produto3: %d\n", sizeof(produto3));
    printf("Tamanho do produto4: %d", sizeof(produto4));

    return 0;
}
