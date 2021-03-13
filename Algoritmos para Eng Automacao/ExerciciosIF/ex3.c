/*Construir um algoritmo que leia a idade e a altura de um jogador. Se o jogador
tiver mais de 18 anos e se tiver mais do que 1.90 de altura, deve-se exibir a mensagem indicando que o jogador est´a fora da categoria ’A’ caso contr´ario deve-se exibir
mensagem indicando que o jogador est´a na categoria ’A*/

#include<stdio.h>
19
void main (void){
float altura,idade;


printf("Qual sua idade: ");
scanf("%f",&idade);
printf("Qual sua altura: ");
scanf("%f",&altura);

if(altura>1.9 && idade > 18){
printf("Fora da categoria A \n");
}else{
printf("Dentro da categoria A \n");
}


}
