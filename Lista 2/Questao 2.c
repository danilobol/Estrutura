/* 2� Os programas (trechos de c�digo) abaixo possuem erros? Qual(is)? Como
deveriam ser? Comente ?
a)
void main() {
int x, *p;
x = 100;
p = x;
printf(�Valor de p: %d.\n�, *p);
}

RESPOSTA: O programa da erro, pois onde tem p=x temos que p aponta para uma vari�vel e n�o para o conte�do do endere�o dela.

void main() {
int x, *p;
x = 100;
p = &x;
printf(�Valor de p: %d.\n�, *p);
}

------------xxxx-------------------------xxxx--------------------xxxx

b)
void troca (int *i, int *j) {
int *temp;
*temp = *i;
*i = *j;
*j = *temp;
}

RESPOSTA: N�o tem erro, mas temp n�o precisa ser um apontador :

void troca(int*i,int*j)
{

int temp;

temp = *i;

*i = *j;

*j = temp;

}
--------------xxxx---------------------------xxxxxx---------------xxxxx

c)
char *a, *b;
a = "abacate";
b = "uva";
if (a < b)
printf ("%s vem antes de %s no dicion�rio", a, b);
else
printf ("%s vem depois de %s no dicion�rio", a, b);

RESPOSTA: No uso de char a e b para receber strings "abacate" e "uva", n�o � necessario o uso de ponteiros neste codigo e as posi��es do else est�o invertidas.

char a[], b[]; 
a[] = "abacate";
b[] = "uva";  
if (a < b)
{
printf ("%s vem antes de %s no dicion�rio", a, b); 
} 
else 
{
printf ("%s vem depois de %s no dicion�rio", b, a);
}
