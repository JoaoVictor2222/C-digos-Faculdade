/*11) Faça um algoritmo que leia, Nome idade e sexo de N pessoas. Após a leitura faça:
a) Imprima o Nome, idade e sexo das pessoas cuja idade seja maior que a idade da primeira pessoa.
b) Imprima o Nome e idade de todas as mulheres.
c) Imprima o Nome dos homens menores de 21 anos.*/

#include<stdio.h>
#include <string.h>
void main(void){


typedef struct {
    char nome[200];
    int idade;
    int sexo;
} Pessoa;
Pessoa vet[5];
int i=0;
for(i=0; i<5; i++) {
    printf(" Digite nome da pessoa: ");
    scanf("%s%*c", &vet[i].nome);
    printf(" Digite a idade da pessoa: ");
    scanf("%d%*c", &vet[i].idade);
    printf(" Digite o sexo (1-homem 2-mulher): ");
    scanf("%d%*c", &vet[i].sexo);
}
printf("\nPessoas mais velhas que a primeira:\n ");
for(i=0;i<5;i++){
    if(vet[i].idade>vet[0].idade){

    printf(" \n O nome da pessoa: %s ", vet[i].nome);
    printf(" \n A idade da pessoa: %d ", vet[i].idade);
    printf(" \n O sexo da pessoa: %d \n ", vet[i].sexo);
    }
}

/*for(i=0; i<5; i++) {
    printf(" \n O nome da pessoa: %s ", vet[i].nome);
    printf(" \n A idade da pessoa: %d ", vet[i].idade);
    printf(" \n O sexo da pessoa: %d ", vet[i].sexo);
}*/
printf("\nMulheres:\n ");
for(i=0; i<5; i++) {
 if(vet[i].sexo==2){

    printf(" \n O nome da pessoa: %s ", vet[i].nome);
    printf(" \n A idade da pessoa: %d ", vet[i].idade);
    printf("\n ");
 }
 }
printf("\nHomens com menos de 21 anos:\n ");
for(i=0; i<5; i++) {
 if((vet[i].sexo==1)&&(vet[i].idade<21)){

    printf(" \n O nome da pessoa: %s ", vet[i].nome);
 }
}
}
