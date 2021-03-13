/*6. Escreva um programa que apresenta o seguinte menu para calcular a ´area de um
c´ırculo, quadrado ou triˆangulo:
1 -- Circulo
2 -- Quadrado
3 -- Triangulo
Digite a sua op¸c~ao:
Conforme a figura geom´etrica desejada, o programa dever´a solicitar do usu´ario a
informa¸c˜ao necess´aria para efetuar o c´alculo da ´area correspondente.
Por exemplo, para um c´ırculo o usu´ario deve informar o raio do c´ırculo; para um
quadrado o usu´ario deve informar o lado do quadrado e para um triˆangulo o usu´ario
deve informar o valor da base e altura do triˆangulo. Use o comando switch - case. */


#include<stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

void main(void){

int opcao;
float r,area1;
float l,area2;
float area3, base,altura;
printf("Escolha uma opcao: \n 1 -- Circulo \n 2 -- Quadrado \n 3 -- Triangulo \n");
scanf("%i",&opcao);

switch(opcao){

case 1: 

printf("Digite o raio do circulo: ");
scanf("%f",&r);
area1 = PI * (r*r); 
printf("A area do circulo eh: %f \n",area1);   
break;

case 2:

printf("Digite um dos lados do quadrado: ");
scanf("%f",&l);
area2= l*l;
printf("A area do quadrado eh: %f \n",area2);   
break;

case 3:
printf("Digite a base do triangulo: ");
scanf("%f",&base);
printf("Digite a altura do triangulo: ");
scanf("%f",&altura);
area3 = (base*altura)/2;
printf("A area do triangulo eh: %f \n",area3); 
break;
default: printf("Opcao Invalida \n");
}

}
