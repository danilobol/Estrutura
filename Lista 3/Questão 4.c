#include <stdio.h>

int main (){
  
    int n, *num, i, par=0, impar=0;
    printf("Numero de inteiros: ");
    scanf("%d", &n);

    num = malloc(n*sizeof(int));

	printf("Elementos do vetor: ");
    for (i=0; i < n; i++){
    	
        scanf("%d", &num[i]);
    }

    for (i=0; i <n; i++){
        if (numero[i] % 2 == 0){
        	
            printf("O numero %d e par\n", num[i]);
            par++;
        }
        else
        {
            printf("O numero %d e impar\n", num[i]);
            impar++;
        }
    }

    printf("%i numeros par \n %i numeros impar", par, impar);

    return 0;

}
