#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n)
{
    int res;

    if (n > 2)
    {
        res = (fibonacci(n - 1) + fibonacci(n - 2));
    }
    else
    {
        res = 1;
    }

    return (res);
}

int main(int argc, char const *argv[])
{
    int n, i, res = 0;

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i < n + 1; i++)
    {
        printf("%dº - %i\n", i, res);
        res = fibonacci(i);
    }
    printf("\n");

    return 0;
}