#include <stdio.h>

int main(void)
{
  int i, tamanho, x, cont;
  
  printf("Digite o tamanho do seu vetor: ");
  scanf("%d", &tamanho);
  
  int v[tamanho];
  
  
  scanf("%i", &x); // Numero para achar seus multiplos
  
  for (i=0; i < tamanho; i++) //gerar um vetor aleatorio
  {
    v[i] = rand() % 100;
    printf("%d", v[i]);
  }
  
  for (i=0; i < tamanho; i++)
  {
    if (v[i] % x == 0 )
    {
      printf("Temos que %d e multiplo de %d", v[i], x);
      cont++;
    }
  }
  
  printf("Foram encontrados %d multiplus de %i", cont, x);
  
  return 0;
  
}
