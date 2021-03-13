/* Faça um programa que receba três notas, calcule e mostre a média
aritmética entre elas.*/

#include <stdio.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL, "");

float v1,v2,v3;
printf("Digite o valor 1: ");
scanf("%f",&v1);
printf("Digite o valor 2: ");
scanf("%f",&v2);
printf("Digite o valor 3: ");
scanf("%f",&v3);
float media = (v1+v2+v3)/3;
printf("A média total foi de : %f",media);

}
