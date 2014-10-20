#include <stdio.h>

int main(void)
{
  int a, i, max, cont;
  
  void rep(int *p, int a, int *max, int *cont);
  
<<<<<<< HEAD
  printf("Digite quantos elementos tera seu vetor:\n");
  scanf("%i",&a);
  int p[a];
  printf("Digite o valor dos seus elementos:\n");
=======
  printf("Digite quantos elementos tem seu vetor?:\n");
  scanf("%i",&a);
  int p[a];
  printf("Digite os elementos:\n");
>>>>>>> origin/master
  for (i=0; i<a; i++)
    {
      scanf("%i", &p[i]);
    }
    
  rep(p, a, &max, &cont);
  
<<<<<<< HEAD
  printf("O maximo eh: %i\n", max);
=======
  printf("O maximo e: %i\n", max);
>>>>>>> origin/master
  
  printf("O maximo ocorre: %i\n", cont);
  
  return 0;
}

void rep(int *p, int a, int *max, int *cont)
{
    cont = 0;
    int i, j, aux;
    for(i=0; i < a; i++)
    {
        for(j= i + 1; j < a; j++)
        {
<<<<<<< HEAD
            if(p[i] > p[j])
=======
            if(p[i] < p[j])
>>>>>>> origin/master
            {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
<<<<<<< HEAD
    *max = p[a-1];
=======
    *max = p[0];
>>>>>>> origin/master
    
    for (i=0; i < a; i++)
    {
        if (p[i] == *max)
          *cont++;
      
    }
    
}
