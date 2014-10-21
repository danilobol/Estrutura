/*7)Crie uma função que receba uma string como parâmetro (de tamanho
desconhecido) e retorne uma cópia da mesma. A assinatura da função deve
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
