#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n, i=0, *vetor[10], j, cont=0;
	
	
    while (scanf ("%d",n) > 0){
    	
        vetor[i] = n;
        i++;
        cont ++;

    }

    printf("\nO vetor digitado foi:\n");
    for (j=0; j<cont ; j++)
    {
        printf("%d ", vetor[j]);
    }

    return 0;

}
