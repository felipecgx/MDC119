#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x = 9;
    int *ptr;
    printf("\n %p \n", ptr);

    ptr = &x;

    printf("Valor de x: %p\n", x);
    printf("Valor do ponteiro: %p\n", ptr);

    ptr = 20;

    printf("Valor de x: %p\n", x);
    printf("Valor do ponteiro: %p\n", ptr);

    return 0;
}
