#include <stdio.h>

int main(void)
{
  int **matriz, lin, col, i, j;
  
  printf("Digite o numero de linhas da matriz: ");
  scanf("%i", &lin);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%i", &col);
  
  matriz = (int**)malloc(lin*sizeof(int*));
  
  for (i = 0; i < linha; i++)
  {
    matriz[i] = (int*)malloc(col*sizeof(int));
    for (j = 0; j < col; j++)
      matriz[i][j] = 0;
  }

  free(matriz);

  return 0;
  
}
