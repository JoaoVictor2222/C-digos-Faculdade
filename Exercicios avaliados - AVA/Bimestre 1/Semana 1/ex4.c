
#include <stdio.h>
#include <string.h>

void main(void){

char string[100];
printf("Digite uma frase: ");
gets(string);

if(string[(strlen(string)-1)]=='$'){
strrev(string);
printf("Reverso: %s\n", string);
}
}
