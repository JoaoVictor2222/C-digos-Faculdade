/*Faça um programa que receba o salário‐base de um funcionário, calcule e
mostre seu salário a receber, Sabendo‐se que esse funcionário tem
gratificação de R$ 50,00 e paga imposto de 10% sobre o salário‐base.*/

#include <stdio.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL, "");
float salario;
printf("Digite seu salario: ");
scanf("%f",&salario);
float reajuste = salario*0.1;
float bonus= 50;
float salario_total= salario+bonus-(reajuste);
printf("Salario reajustado: %f \n",salario_total);
printf("O reajuste foi de : %f \n",reajuste);
printf("O bonus foi de : %f \n",bonus);
}
