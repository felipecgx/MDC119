#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("\n %i", i);
        }
    }
}