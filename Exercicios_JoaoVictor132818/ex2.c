/*Escrever um algoritmo que calcule o novo sal´ario de um funcion´ario. Os funcion´arios
que recebem mais de 1000 reais ter˜ao direito a 5% de aumento, os funcion´arios que
recebem at´e 1000 reais ter˜ao direito a 7% de aumento.*/

#include<stdio.h>

void main(void){

float salario;
printf("Digite seu salario: ");
scanf("%f",&salario);

if(salario>1000){
 salario = salario+(salario*0.05);
 printf("Novo salario: %f \n",salario);
}else{
 salario = salario+(salario*0.07);
 printf("Novo salario: %f \n",salario);	
}


}
