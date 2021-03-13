#include<stdio.h>
/*Faça um algoritmo que receba o salário base de um
funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5%
sobre o salário base e paga imposto de 7% sobre
este salário.*/

void main(void){

float salario,bonus,imposto;
printf("Digite o seu salário base: ");
scanf("%f",&salario);

bonus = salario * 0.05;
imposto = salario * 0.07;
float salario_final = salario + bonus - imposto;
printf("Salario final: %f", salario_final);

}


