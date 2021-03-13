/*4. Escrever um algoritmo que leia a idade de uma pessoa e informe sua classe eleitoral:
• n˜ao eleitor (abaixo de 16 anos);
• eleitor obrigat´orio (entre 18 e 65 anos) e
• eleitor facultativo (entre 16 e 18 anos e acima dos 65 anos).*/

#include<stdio.h>

void main(void){
int idade;
printf("Digite sua idade: ");
scanf("%i",&idade);

if(idade<16){
 printf("Não eleitor \n");
}else{
 if(idade>=16 && idade<18 || idade>=65){
 printf("Eleitor facultativo \n");
}else{
 printf("Eleitor obrigatório \n");
}

}

}

