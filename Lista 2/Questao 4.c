#include <stdio.h>
int main(){
    
	int N,i,max,min;
    
	void mm(int *vet, int N, int *max, int *min);
    
	printf("Numero de elementos de seu vetor:\n");
    scanf("%i",&N);
    
	int v[N];
    
	printf("Elemento:\n");
    
	for(i = 0; i < N; i++){
        
		scanf(" %i",&v[i]);
    
	}
    
	mm(v, N, &max, &min);
    
	printf("\nO elemento minimo: %i\n", min);
    printf("O elemento maximo: %i\n", max);
    
	return 0;
}
void mm(int *vet, int N, int *max, int *min){

    int i, j,temporaria;
    for(i=0; i < N; ++i){
        for(j= i + 1; j < N; ++j){
            if(vet[i] > vet[j]){
                
				temporaria = vet[i];
                vet[i] = vet[j];
                vet[j] = temporaria;
            
			}
        }
    }
    *max = vet[N-1];
    *min = vet[0];

}
