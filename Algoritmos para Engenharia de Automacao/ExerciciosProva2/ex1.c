#include <stdio.h>

void main (void){

int i=0;

printf("Digite o numero de termos: ");
scanf("%d",&i);
//printf("%d\n \n",i);
int contador,par,soma;
contador=0;
par=2;
soma=0;



while(contador <i){
soma = soma + par;
contador = contador +1;
par = par +2;

}
printf("Os pares sao:");
for(int j=2; j<=(i*2);j=j+2){


printf(" %d ",j);

}
printf("e a soma eh: %d", soma);
}
