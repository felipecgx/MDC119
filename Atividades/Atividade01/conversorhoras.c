#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos = 600, horas = segundos / 3600, minutos = segundos / 60;
    printf("%d,%d,%d", horas, minutos, segundos);
    return 0;
}
