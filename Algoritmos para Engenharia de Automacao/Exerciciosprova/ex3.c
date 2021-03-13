#include <stdio.h>
#include <stdlib.h>
#define n 2

/*3) Faça um programa que possibilite ao usuário digitar os valores de uma matriz quadrada de dimensão n constante (portanto, 
a dimensão é pré-definida). Depois de informados os valores da matriz, o  algoritmo deve informar ao usuário a soma dos elementos 
da última coluna com os da última linha.*/

int main()
{
int i, j, soma1=0, soma2=0, somatotal=0;
int str[n][n];
for (i=0; i<n; i++) {
for (j=0; j<n; j++) {
printf("\nDigite o elemento %d %d: ", i+1, j+1);
scanf("%d", &str[i][j]);
}
}
for (i=0; i<n; i++){
for (j=0; j<n; j++){
printf(" %d ", str[i][j]);
if (j==n-1)
printf("\n");
else 
printf("\t");
}
}
for (i=0; i<n; i++) {
for (j=0; j<n; j++) {
if(i == n - 1){
soma1 += str[i][j];
}
if(j == n - 1){
soma2 += str[i][j];
}
}
}
printf("\n %d", soma1);
printf("\n %d", soma2);
    
somatotal = soma1 + soma2;
printf("\nA soma é: %d\n",somatotal);
}
