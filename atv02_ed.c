1- Qual o valor de y no final do programa? 
#include <stdio.h>
main()
{
int y, *p, x;
y = 0;
p = &y;
x = *p;
x = 4;
++(*p);
x–;
(*p) += x++;
printf (“y = %d\n”, y);
Resposta: Y = 4


2- 2-Teste e explique a diferença, caso exista, entre
p++; (*p)++; *(++p);
RESPOSTA: p++ incrementa em 1 ao endereço atual da variável.
(*p)++: o valor acessado pelo ponteiro é incrementado em 1.
*(++p): Permite o avanço do ponteiro para a próxima posição de memória e também que o valor da próxima posição seja acessado pelo ponteiro.

b) O que quer dizer *(p+10)?
R: Significa que o ponteiro está apontando para o conteúdo de memória endereçado a 10 posições


3-Quais serão os valores de x, y e p ao final do trecho de código abaixo? int x, y, *p;y = 0; p = &y; x = *p; x = 4; (*p)++; –x; (*p) += x;

Resposta: X: 3 ; Y: 4 ; p: 0061FF14

4-Os programas (trechos de código) abaixo possuem erros. Qual(is)? Como deveriam ser? 
a) void main() { int x, *p; x = 100; p = x; printf(“Valor de p: %d.\n”, *p);}
R: O erro é encontrado na ausencia do "&" por meio do qual acessamos o endereço de memória da variável x.

b) void troca (int *i, int *j) { int *temp; *temp = *i; *i = *j; *j = *temp;}

R: O ponteiro *temp não foi inicializado na linha de declaração.

c) char *a, *b; a = “abacate”; b = “uva”; if (a < b) printf (“%s vem antes de %s no dicionário”, a, b); else printf (“%s vem depois de %s no dicionário”, a, b);
R:  erro na comparação entre a A e B. Estamos tratando endereços de memória e não o conteúdo em si. Por essa razão, não teremos o resultado esperado.


5- Escreva uma função chamada troca que troca os valores dos parâmetros recebidos. Sua assinatura deve ser:void troca(float *a, float *b)
#include <stdio.h>

void troca(float *a, *b){
float auxiliar; //Para facilitar a troca
aux = *a;
a* = *b;
*b = aux;


}
