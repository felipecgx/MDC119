#include <stdio.h>
#include <stdlib.h>

converte_hhmmss_em_segundos(int h, int m, int s)
{
    int conv;

    conv = h * 3600 + m * 60 + s;
    return (conv);
}
int main(int argc, char const *argv[])
{
    int conv;
    int horas, minutos, segundos;

    printf("Horas:");
    scanf("%d", &horas);

    printf("Minutos:");
    scanf("%d", &minutos);

    printf("Segundos:");
    scanf("%d", &segundos);

    conv = converte_hhmmss_em_segundos(horas, minutos, segundos);
    printf("\n%d:%d:%d \nConvertido em segundos: \n%ds\n", horas, minutos, segundos, conv);
    return 0;
}
