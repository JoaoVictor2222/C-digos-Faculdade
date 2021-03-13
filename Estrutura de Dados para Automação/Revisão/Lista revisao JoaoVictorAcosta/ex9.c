/*Dado modelo, ano de fabricação, cor e placa de 1000 carros, faça um algoritmo que:
a) Imprima quantos são, da cor verde e o percentual em relação ao total.
b) Imprima quantos foram fabricados antes de 1990 e o percentual em relação ao total.
c) Imprima quantos são FIAT UNO e o percentual em relação ao total.
d) Imprima quantos carros tem na placa o digito 5 e o percentual em relação ao total. Considere placas
com seguinte formato “AANNNN”*/

#include <stdio.h>

void main(void){
int ano[10] = {1989,1975,1983,1960,1980,2004,2005,2006,2007,2008};
int i=0;
float j=0;
for(i=0;i<10;i++){
    if(ano[i]<1990){
        j++;
    }
}
float media = j/10;
printf("%f",media);
}
