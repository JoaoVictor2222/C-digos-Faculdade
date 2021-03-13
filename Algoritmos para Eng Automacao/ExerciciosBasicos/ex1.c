/*
Faça um algoritmo que receba três notas e seus
respectivos pesos, calcule e mostre a média
ponderada dessas notas.
*/
#include<stdio.h>

void main(void){

float n1,n2,n3,p1,p2,p3;
printf("Digite a primeira nota: ");
scanf("%f",&n1);
printf("Digite o peso dela: ");
scanf("%f",&p1);
printf("Digite a segunda nota: ");
scanf("%f",&n2);
printf("Digite o peso dela: ");
scanf("%f",&p2);
printf("Digite a terceira nota: ");
scanf("%f",&n3);
printf("Digite o peso dela: ");
scanf("%f",&p3);

float nota1,nota2,nota3,media;
nota1 = n1*(p1/10);
nota2 = n2*(p2/10);
nota3 = n3*(p3/10);

media = (nota1+nota2+nota3)/3;
printf("A média final foi: %f \n",media);

}
