#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[30] = "Eu gosto de C!";

    char *p = &string;
    for (int i = 0; i < 30; i++)
    {
        printf("%c", p[i], *(p + i));
    }

    return 0;
}
