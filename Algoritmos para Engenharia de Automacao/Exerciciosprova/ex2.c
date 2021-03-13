#include <stdio.h>

/* Faça um programa que leia um vetor de 20 posições de números inteiros e divida todos os
seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos. Os valores do vetor devem ser informados pelo usuário.*/


void main(void){

int i=0;
float vet[20];
while(i<20){

printf("Digite um numero: ");
scanf("%f",&vet[i]);
i++;
}

int j;
int maior=0;

for(j=0;j<20;j++){
if(vet[j]>maior){
maior= vet[j];
}
}
int k;
for(k=0;k<20;k++){

vet[k]=vet[k]/maior;

}


int l;
for(l=0;l<20;l++){

printf("%f \n",vet[l]);

}


}
