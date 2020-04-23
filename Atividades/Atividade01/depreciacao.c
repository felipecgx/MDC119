#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct carro_t
    {
        char marca[10];
        int ano;
        float valor;
    };

    float valor1;
    int anosdec;
    int carro1;
    float valor_depreciado, nvvalor;

    struct carro_t carro_s;

    printf("Marca do carro: \n - ");
    __fpurge(stdin);
    fgets(carro_s.marca, 10, stdin);

    printf("Ano do carro: \n - ");
    __fpurge(stdin);
    scanf("%i", &carro1);
    carro_s.ano = carro1;

    printf("Valor do carro: \n - ");
    __fpurge(stdin);
    scanf("%f", &valor1);

    carro_s.valor = valor1;

    nvvalor = carro_s.valor - (2020 - carro_s.ano) * 0.01 * carro_s.valor;
    valor_depreciado = carro_s.valor - nvvalor;

    anosdec = 2020 - carro_s.ano;
    printf(" \n A depreciacao da/o: \n - %sAo longo dos %i anos decorridos foi: \n - R$%.3f \n O novo valor do carro e: \n - R$%.3f \n ", carro_s.marca, anosdec, valor_depreciado, nvvalor);

    return 0;
}