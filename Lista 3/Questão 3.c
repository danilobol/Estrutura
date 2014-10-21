#include <stdio.h>

int main (){
	
    int *vetor, n=5, i;
    
    vetor = malloc(n*sizeof(int)); // aloca a memoria

    printf("Digite os 5 elementos:\n");
    for (i=0; i<n; i++){
    	
        scanf("%d", &vetor[i]);
    }

    printf("Vetor: ");
    
	for (i=0; i<n; i++){

        printf("%d ", vetor[i]);

    }

    free(vetor); //libera a memoria alocada

    return 0;
}
