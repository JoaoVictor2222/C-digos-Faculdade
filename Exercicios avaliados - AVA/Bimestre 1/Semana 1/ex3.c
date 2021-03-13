
#include <stdio.h>
#include <string.h>

void main(void){

char string[100];

printf("Digite uma frase de 80 letras: ");
gets(string);
int tamanho = strlen(string);
printf("%d \n",tamanho);

while(tamanho!=80){
printf("Precisa ter 80 letras\n ");
printf("Digite uma frase de 80 letras: ");
gets(string);
tamanho = strlen(string);
}

int i=0;
strrev(string);
printf(string);

}

