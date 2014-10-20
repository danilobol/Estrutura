#include <stdio.h>

int main(){
	
    int n,i,m, mn;
    void maior(int *v, int n, int *m, int *mn);
    printf("Numero de elementos do vetor:\n");
    scanf("%i",&n);
    int v[n];
    printf("Digite os elementos:\n");
    for(i = 0; i < n; i++){
            scanf(" %i",&v[i]);
        }
    maior(v, n, &m, &mn);
    printf("O menor: %i\n", mn);
    printf("O maior: %i\n", m);
    return 0;
    
}

void maior(int *v, int n, int *m, int *mn){
    int i, j, aux;
    for(i=0; i < n; ++i){
            for(j= i + 1; j < n; ++j){
                    if(v[i] < v[j]){
                            aux = v[i];
                            v[i] = v[j];
                            v[j] = aux;
                    }
            }
    }
    *m = v[0];
    *mn = v[n-1];
}
