#include<stdio.h>
/*
Faça um algoritmo que receba o valor de um depósito
e o valor da taxa de juros, calcule e mostre o valor do
rendimento e o valor total depois do rendimento.
*/

void main (void){

float deposito,juros;
printf("digite o valor do deposito: ");
scanf("%f",&deposito);
printf("Digite a taxa de juros: ");
scanf("%f",&juros);
float rendimento;
rendimento = deposito*(juros/100);
printf("O valor total ficou: %f \n",deposito+rendimento);
printf("O rendimento foi: %f",rendimento);

}
