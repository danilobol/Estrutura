#include <stdio.h>

int main (void)
{
	int a = 2, *pA=&a;
	float b = 3.2, *pB=&b;
	char c = 'D', *pC=&c;
  
	printf("Antes: %i , %.2f e %c\n\n", a,b,c);
	*pA = 4;
	*pB = 2.3;
	*pC = 'B';
	printf("Depois: %i , %.2f e %c\n\n", a,b,c);
  
	return 0;
}
