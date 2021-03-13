/*Faça um programa que receba quatro números inteiros, calcule e mostre a
/soma desses números.*/
#include <stdio.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL, "");
int v1,v2,v3,v4;
printf("Digite o valor 1: ");
scanf("%d",&v1);
printf("Digite o valor 2: ");
scanf("%d",&v2);
printf("Digite o valor 3: ");
scanf("%d",&v3);
printf("Digite o valor 4: ");
scanf("%d",&v4);
int total=v1+v2+v3+v4;
printf("A soma total é: %d",total);
}
