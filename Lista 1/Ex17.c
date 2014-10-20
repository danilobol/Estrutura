#include <stdio.h>

int main(void){
	
	float a[10];
	int i;

  
	for (i=0;i<10;i++)
		printf("A[%d] = %d\n", i, &a[i]);
  
	return 0;
  
}
