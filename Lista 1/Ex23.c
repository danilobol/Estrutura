#include <stdio.h>
int main()
{
	int imprimir(int v[], int *p);
    int v[5] = {1,2,3,4,5};
    int *p;
    imprimir(v, &p);
    return 0;

}
int imprimir(int v[], int *p){
	
	for(p = v; p < v + 5; p++){
        printf("%d ",*p);
        
    }
}
