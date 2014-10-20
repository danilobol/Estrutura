#include <stdio.h>
int main()
{
    int v[5];
    int i;
    void sub(int vetor[], int y, int *ponteiro);
    for (i=0;i<5;i++){
    	scanf ("%d ",&v[i]); //lê 5 numeros
    }

    int x, *ptr;
    
	scanf ("%d",&x); //recebe o valor a ser substituido em todo o vetor
    sub(v, x, &ptr);
    return 0;
}
void sub(int vetor[], int y, int *ponteiro){
	
    for(ponteiro = vetor ; ponteiro < vetor + 5; ponteiro ++){
    
	    *ponteiro = y; //recebe o valor de x
        printf("%i ",*ponteiro); // imprime em todas as posições o valor de x
    
	}
}
