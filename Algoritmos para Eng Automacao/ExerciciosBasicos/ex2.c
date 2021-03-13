#include<stdio.h>
/*
Faça um algoritmo que receba o salário de um
funcionário e o percentual de aumento, calcule e
mostre o valor do aumento e o novo salário.
*/

void main(void){

float salario, porcentagem;
printf("Digite seu salario: ");
scanf("%f",&salario);
printf("Digite a porcentagem de reajuste: ");
scanf("%f",&porcentagem);

float salario_final;
salario_final = salario+(salario*(porcentagem/100));
printf("O salario reajustado eh: %f",salario_final);
}
