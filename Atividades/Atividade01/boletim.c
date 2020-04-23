#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, j, a, k;
    float mediat;
    float notas[10][3];

    printf("Digite o numero de alunos:\n-");
    scanf("%d", &j);
    for (i = 0; i < j; i++)
    {
        a = i + 1;
        printf("Digite a primeira nota do %d° aluno: ", a);
        scanf("%f", &notas[i][0]);
        printf("Digite a segunda nota do %d° aluno: ", a);
        scanf("%f", &notas[i][1]);
        notas[i][2] = (notas[i][0] + notas[i][1]) / 2;
        mediat = notas[i][2] + mediat;
    }

    a = 0;
    mediat = mediat / j;

    printf("\n nota 1, nota 2, media, situacao ");

    for (i = 0; i < j; i++)

    {
        a = i + 1;
        printf("Aluno%d- ", a);
        for (k = 0; k < 3; k++)
        {
            printf("%.2f\t", notas[i][k]);
        }
        if (notas[i][2] >= 5)
        {
            printf("Aprovado");
        }
        else
        {
            printf("Reprovado");
        }
        printf("\n");
    }

    printf("\n Media total: %.2f \n", mediat);

    return 0;
}