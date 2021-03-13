#include <stdio.h>
 
/*Escreva um programa para contar quantas vezes um caractere ocorre em uma string. O
caractere e a string serão informado pelo usuário do programa.*/
 
void main(void){

char c;
printf("Digite o caracter:");
scanf("%c",&c);

char string[100];
printf("\n Digite uma frase: ");
scanf("%s",string);

int i=0,n=0;

while(string[i]!= '\0'){
	if (string[i] == c){
 		n++;
	} 
	i++;
}

printf("O numero do caracter informado nessa string eh: %d \n",n);

}
