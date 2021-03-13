/*1) Escreva uma função mm que receba um vetor inteiro v[0..n-1]
e os endereços de duas variáveis inteiras, digamos min e max, e
deposite nessas variáveis o valor de um elemento mínimo e o valor
de um elemento máximo do vetor.   Escreva também uma função main que use a função mm.*/

#include <stdio.h>
#include <limits.h>
void mm(int *min,int *max,int v[],int tamanho){
  int maior=INT_MIN;
  int menor=INT_MAX;
  for (int i = 0; i < tamanho; ++i) {
    if (v[i] >maior){
      maior= v[i];
    }
  }
   *max = maior;
  for (int i = 0; i < tamanho; ++i) {
    if (v[i] <menor ) {
      menor = v[i];
    }
  }
   *min =menor;
}

void main (void){

int v[]= {1,-400,3,4,5,10,5,944787};
int tamanho = sizeof(v)/sizeof(v[0]);
int *max;
int *min;
mm(&min,&max,v,tamanho);

printf("%i\n",min);
printf("%i\n",max);

}

