/*5. Escrever um algoritmo que leia um n´umero entre 0 e 1 e indique a qual intervalo o
n´umero pertence:
• Intervalo 1 - se o n´umero for igual ou maior que 0 e menor que 0,25.
• Intervalo 2 - se o n´umero for igual ou maior que 0,25 e menor que 0,50.
• Intervalo 3 - se o n´umero for igual ou maior que 0,50 e menor que 0,75.
• Intervalo 4 - se o n´umero for igual ou maior que 0,75 e menor ou igual a 1.*/

#include<stdio.h>

void main(void){

float num;
printf("Digite um valor entre 0 e 1: ");
scanf("%f",&num);

if(num>=0 && num<0.25){
	printf("Intervalo 1 \n");
}

if(num>=0.25 && num<0.5){
 	printf("Intervalo 2 \n");
}
if(num>=0.5 && num<0.75){
	printf("Intervalo 3 \n");
}

if(num>=0.75 && num<=1){
	printf("Intervalo 4 \n");
}

if(num<0 ||num>1){
	printf("Valor nao esta entre 0 e 1 \n");
}

}

