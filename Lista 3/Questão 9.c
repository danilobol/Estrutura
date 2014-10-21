#include <stdio.h>
#include <stdio.lib>

int main(void){
  float **matriz;
  int lin, col, i,j;
  
  scanf("%i", &lin);
  
  scanf("%i", &col);
  
  matriz = (float**)malloc(col*sizeof(float*));
  
  for (i=0; i < lin; i++)
  {
    matriz[i] = (float*)malloc(lin*sizeof(float));
  }
  

  return 0;
}
