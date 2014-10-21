#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char sobrenome[20];
    int ano;
}registro;

int main (void)
{
    int alunos, i;
    printf("Quantos alunos serão cadastrados?: ");
    scanf(" %d", &alunos);

    registro *r;

    r = (registro*)malloc(sizeof(registro));

    for (i=0; i < alunos; i++){
    	
        printf("Digite o sobrenome do aluno %d: ", i+1);
        scanf(" %s", &r->sobrenome);
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf(" %i", &r->matricula);
        printf("Digite o ano de nascimento do aluno %d: ", i+1);
        scanf(" %i", &r->ano);
        r = r + 1;

    }


    for (i=0; i<alunos; i++)
    {
        printf("O cadastro %i e:\n", i+1);
        printf("Sobrenome: %s\n", (r[i]).sobrenome);
        printf("Matricula: %i\n", (r[i]).matricula);
        printf("Ano de nascimento: %i\n", (r[i]).ano);
        printf("\n");
    }

    free (r);

    return 0;

}
