/*2) Escreva um programa que declare uma matriz 10x10 de inteiros.
 Você deve inicializar a matriz com zeros usando ponteiros para
  endereçar seus elementos. Preencha depois a matriz com os números de 1 a 100, também usando ponteiros.*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void main(void){

int m[10][10];
int t,time_t;
int *p[10][10];
srand((unsigned) time(&t));

for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
m[i][j]=0;
p[i][j]=&m[i][j];
}
}

for (int i = 0; i < 10; ++i) {
        for (int j = 0; j< 10; ++j) {
    *p[i][j] = rand()%100;
        }
    }
for (int i = 0; i < 10; ++i) {
for (int j = 0; j < 10; ++j) {
printf("%d\n",*p[i][j]);
}
}
}
