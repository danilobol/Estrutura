/* 2­ Os programas (trechos de código) abaixo possuem erros? Qual(is)? Como
deveriam ser? Comente ?
a)
void main() {
int x, *p;
x = 100;
p = x;
printf(“Valor de p: %d.\n”, *p);
}

RESPOSTA: O programa da erro, pois onde tem p=x temos que p aponta para uma variável e não para o conteúdo do endereço dela.

void main() {
int x, *p;
x = 100;
p = &x;
printf(“Valor de p: %d.\n”, *p);
}

------------xxxx-------------------------xxxx--------------------xxxx

b)
void troca (int *i, int *j) {
int *temp;
*temp = *i;
*i = *j;
*j = *temp;
}

RESPOSTA: Não tem erro, mas temp não precisa ser um apontador :

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
printf ("%s vem antes de %s no dicionário", a, b);
else
printf ("%s vem depois de %s no dicionário", a, b);

RESPOSTA: No uso de char a e b para receber strings "abacate" e "uva", não é necessario o uso de ponteiros neste codigo e as posições do else estão invertidas.

char a[], b[]; 
a[] = "abacate";
b[] = "uva";  
if (a < b)
{
printf ("%s vem antes de %s no dicionário", a, b); 
} 
else 
{
printf ("%s vem depois de %s no dicionário", b, a);
}
