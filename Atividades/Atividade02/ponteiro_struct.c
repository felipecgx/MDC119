#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct s_aluno
{
    int matricula;
    char nome[30];
    float media;
};

int main(int argc, char const *argv[])
{
    struct s_aluno aluno;
    struct s_aluno *ptr = &aluno;

    aluno.matricula = 1922130018;
    aluno.media = 8.5;
    strcpy(aluno.nome, "Felipe");

    printf("Nome: %s\nMatricula: %d\nMedia: %.2f\n", ptr->nome, ptr->matricula, ptr->media);

    return 0;
}
