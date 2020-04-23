#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union u_numeros_inteiros {
    char caracter;
    short int inteiro_curto;
    int inteiro;
    long int inteiro_longo;
};

int main(int argc, char const *argv[])
{
    union u_numeros_inteiros numero;

    numero.caracter = 'G';
    printf("numero.caracter: %c ", numero.caracter);

    numero.inteiro_curto = 5;
    printf("numero.inteiro_curto = %hi \n", numero.inteiro_curto);

    numero.inteiro = 15;
    printf("numero.inteiro = %d \n", numero.inteiro);

    numero.inteiro_longo = 2;
    printf("numero.inteiro_longo = %li", numero.inteiro_longo);

    return 0;
}
