/*2) Escreva uma função MinMax que receba um vetor inteiro v, com tamanho pré-definido,e os endereços de duas variáveis inteiras, digamos min e max, e deposite nessas variáveis o valor de um elemento mínimo e o valor de um elemento máximo do vetor. Escreva também uma função main que use a funçãoMinMax. Na função main escrever os valores máximo e minímo de v.*/

#include <stdio.h>

#define tam 6

void MinMax(int *vector, int *max, int *min){
int i;
*min = vector[0];
*max = vector[0];
for(i=0;i<tam;i++){
    if(vector[i]>*max){ 
        *max = vector[i];
}

    if(vector[i]<*min){ 
        *min = vector[i];
}


}


}


void main (void){

int vet[] = {4,1,2,3,64236,-15321};
int a,b;
MinMax(vet, &a,&b);

printf("max %d\n", a);
printf("min %d\n", b);



}


