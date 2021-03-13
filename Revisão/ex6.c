/*6) Dado uma frase de exatamente 80 caracteres, escreva a frase de trás para frente, um caracter por linha.*/

#include <stdio.h>
#include <string.h>

void main(void){

char string[80];
printf("Digite uma frase de 80 letras: ");
gets(string);

strrev(string);

 printf("Reverso: %s\n", string);

 int i=0;
 while(i<80){
    printf(string[i]);
    i=i+1;
 }




}
