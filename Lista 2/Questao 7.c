/*7)Crie uma fun��o que receba uma string como par�metro (de tamanho
desconhecido) e retorne uma c�pia da mesma. A assinatura da fun��o deve
ser:
char *strcopy(char *str);
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[20] = "Danilo";
    char palavra2[20];
    strcpy(palavra2, palavra1);
    printf("%s\n", palavra2 );
    return 0;

}
