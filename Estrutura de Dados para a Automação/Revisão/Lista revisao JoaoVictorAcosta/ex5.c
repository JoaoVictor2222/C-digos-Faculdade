#include <stdio.h>]

void main(void){
float numerador=997;
float denominador=2;
float divisao;
float nova_divisao=0;
int i=0;

while(i<=50){
    divisao=numerador/denominador;
    nova_divisao=divisao-nova_divisao;
    numerador=numerador-3;
    denominador++;
    i++;
}

printf("%f",nova_divisao);

}
