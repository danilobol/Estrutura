#include <stdio.h>

int main(void)
{
    int vetor[6] = {10, 11, 12, 13, 14, 15};
	int *p = &vetor;
	int i;

    for(i = 0; i < 6; i++){
        p = vetor[i] + 1;
        printf("%p ", *p);
    }
  return 0;
}
