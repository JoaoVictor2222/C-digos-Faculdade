/*Leia um numero, caso ele seja maior do que 20 exiba a sua metade, caso contrario
exiba o proprio n´umero.*/
#include<stdio.h>

void main (void){

float num;
printf("Digite um numero: ");
scanf("%f",&num);

if(num>20){
  float metade;
  metade = num/2.0;
  printf("%f",metade);		
}else{
  printf("%f \n",num);	
}
}


