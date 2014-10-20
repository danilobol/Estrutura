#include <stdio.h>

int main(void)
{
    int v[5], i;
    int *point = v ;
    printf ("Digite 5 numeros:\n");
    
    for (i=0;i<5;i++){
	scanf("%d",&v[i]);
    }
    
	for(i=0; i<5;i++){
        *(point + i) *= 2; // multiplica por 2 cada valor lido
        printf("%d ", v[i]); // imprime o dobro
    }

    return 0;
}
