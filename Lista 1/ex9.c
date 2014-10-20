#include <stdio.h>

int main()
{
        int N,M,i,*resultado;
        int somarvetores(int N, int M, int *v3);
        printf("Numero de elementos do primeiro vetor:\n");
        scanf("%i",&N);
        int v1[N];
        printf("Elementos primeiro vetor:\n");
        for(i=0; i < N; i++)
        {
            scanf("%i",&v1[i]);
        }
        printf("Numero de elementos do segundo vetor: \n");
        scanf("%i",&M);
        int v2[M];
        printf("Elementos do segundo vetor:\n");
        for(i=0;i<M;i++)
        {
            scanf("%i",&v2[i]);
        }
        int v3[N];
        printf("A soma eh:\n");
        somadevetores(N, M, v1, v2, &v3);
        for(i=0;i<N; i++)
        {
            printf("%i ",v3[i]);
        }
}

int somadevetores(int N, int M, int *v1, int *v2, int *v3)
{
    int i;
    if(M == N)
    {
        for(i=0; i<N;i++)
        {
            v3[i] = v1[i] + v2[i];
        }
        return 0;
    }
    else
    {
        return 1;
    }
}
