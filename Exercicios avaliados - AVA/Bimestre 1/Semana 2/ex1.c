/*1) Fa�a um programa que preencha dois vetores vet1 e vet2 de n�meros inteiros, cuja quantidade de elementos
 dever� ser informado, pelo teclado, pelo usu�rio, e calcule a diferen�a entre vet1 e vet2, isto �, todos os
  elementos de vet1 que n�o existam em vet2, sem repeti��es.*/

#include <stdio.h>


void main(void){

int n;

printf("Digite o numero de elementos: ");
scanf("%d",&n);

int v1[n];
int v2[n];
int d[1000];
int i;
printf("Vetor 1: \n");
for (i = 0; i< n; i++){
   scanf("%d", &v1[i]);
}
printf("Vetor 2:\n");
for (i = 0; i< n; i++){

   scanf("%d", &v2[i]);
}
printf("Diferenca: \n");
for(i=0;i<n;i++){
    if(v1[i]!=v2[i]){
        d[i] = v1[i];
        printf("%d\n",d[i]);
}
}
}
