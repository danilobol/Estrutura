#include <stdio.h>

int main(void)
{
  int a=10,b=15;
  
  if (&a>&b)
    printf("O maior endereco eh o de A e seu valor eh: %d", a);
  else 
    printf("O maior endereco eh o de B e seu valor eh: %d", b);
  
  return 0;
}
