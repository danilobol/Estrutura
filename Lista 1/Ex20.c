#include <stdio.h>

 int main()
 {
	int v[5];
	int i;
    printf("Digite os 5 numero: ");
	for (i=0; i < 5; i++){
    	scanf("%d", &v[i]);
	}
	 printf("Numeros pares sao:\n");
	 for (i=0; i<5; i++){
	 	if (v[i]%2==0)
	 	printf("%d \n", v[i]);
	 }
	  return(0);
}
