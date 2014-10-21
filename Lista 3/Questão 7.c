#include <stdio.h>

int main(void)
{
  int c, i, j;
  printf("Numero de cidades: ");
  scanf("%i", &c);
  float mdist [c][c];
  
  for (i=0; i < c; i++){
    for (j=0; j < c; j++){
    	if (i == j)
        	mdist[i][j] = 0;
      else if (i > j)
        mdist[i][j] = mdist[j][i]; 
      else
      {
        pritnf("Digite a distancia entre a cidade %i e %i: ", i+1, j+1);
        scanf("%f", mdist[i][j]);
      }
    
    }
  
  }
  
  printf("As distancias são:");
  
  for (i=0; i < city; i++){
    for (j=0; j < city; j++){
    	
      printf("%.2f\n", mdist[i][j]);
    
	}
  }
  
  int ca = 0, cb = 0;
  
  printf("Digite o numero de duas cidades que deseja ver a sua distancia: ");
  scanf("%i", &ca);
  scanf("%i", &cb);
  printf("A distancia entre as cidades e: %.2f\n", mdist[a-1][b-1]);
  
  return 0;

}
