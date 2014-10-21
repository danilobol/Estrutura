#include <stdio.h>

int main(void)
{
    int n, i, *vet ;
    printf("Digite o tamanho do seu vetor: ");
    scanf("%d",&n);

    vet = malloc(n*sizeof(int));

     printf("Elementos do vetor: ");
	for (i=0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("O vetor eh: ");
    
    for (i=0;i< n; i++)
    {
        printf("%d ", vet[i]);
    }
    printf ("\n");


    return 0;
}
