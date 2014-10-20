#include <stdio.h>

int main(void)
{
  int a,b;

  
  if (&a>&b)
    printf("O maior endereco eh o de A: %d", &a);
  else 
    printf("O maior endereco eh o de B: %d", &b);
  
  return 0;
}
