/* 1) Criar um programa em C que lê do teclado uma palavra, chama uma função que informar quantos caracteres são vogais e quantos são consoantes. Imprimir o número de vogais e consoantes na função principal (main).*/

#include <stdio.h>

int *v, *c;
int vogal =0, consoante=0;
void Cont(char *p){



while(*p!='\0'){

if ( (*p=='a') || (*p=='e') || (*p=='i') || (*p=='o') || (*p=='u') (*p=='A') || (*p=='E') ||(*p=='I') || (*p=='O') || (*p=='U') ){
vogal++;
}else{
consoante++;
}

p++;
}


}


void main(void){

v = &vogal;
c = &consoante;

char palavra[50];
printf("Digite uma palavra: ");
scanf("%s", palavra);
Cont(palavra);

printf("Vogal: %d\n",*v);
printf("Consoante: %d\n",*c);

}
