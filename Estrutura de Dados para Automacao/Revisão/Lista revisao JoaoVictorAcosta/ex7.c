
#include <stdio.h>
#include <string.h>

void main(void){

char string[80];
printf("Digite uma frase de 80 letras: ");
gets(string);
int i=0;
while(string[i]!="$"){
printf("Digite uma frase de 80 letras: ");
gets(string);
}

strrev(string);

 printf("Reverso: %s\n", string);


}
