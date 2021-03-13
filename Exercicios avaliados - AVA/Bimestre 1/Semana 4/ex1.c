/*1) Escreva uma fun��o mm que receba um vetor inteiro v[0..n-1]
e os endere�os de duas vari�veis inteiras, digamos min e max, e
deposite nessas vari�veis o valor de um elemento m�nimo e o valor
de um elemento m�ximo do vetor.   Escreva tamb�m uma fun��o main que use a fun��o mm.*/

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

