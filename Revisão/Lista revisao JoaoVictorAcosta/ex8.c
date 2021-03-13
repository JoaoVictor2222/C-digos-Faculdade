/*8) Dado um conjunto de n registros cada registro contendo um valor real, faça um algoritmo que calcule a
média dos valores maiores que 4. */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>

void main(void){

srand(time(NULL));

int valores[20];
int i=0;




for(i=0;i<20;i++){
    valores[i]= rand()%10;
}

for(i=0;i<20;i++){
    if(valores[i]>4){
    printf("%d \n",valores[i]);
}
}
int j=0;
float novovalor=0;
for(i=0;i<20;i++){
   if(valores[i]>4){
    novovalor=novovalor+valores[i];
    j++;
   }
}
float media;
media = novovalor/j;
printf("media: %f",media);
}
