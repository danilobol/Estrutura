#include <stdio.h>

int main (){
	
    int *vetor, i;
    
    vetor = malloc(5*sizeof(int)); // aloca a memoria

    printf("Digite os 5 elementos:\n");
    for (i=0; i<5; i++){
    	
        scanf("%d", &vetor[i]);
    }

    printf("Vetor: ");
    
	for (i=0; i<5; i++){

        printf("%d ", vetor[i]);

    }

    free(vetor); //libera a memoria alocada

    return 0;
}
