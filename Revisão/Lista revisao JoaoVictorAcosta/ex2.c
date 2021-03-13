#include <stdio.h>

void main(void){

int x;
int nova=0;
int soma;

printf("x: ");
scanf("%d",&x);

int i=1;

while(i<=100){
    soma=x+i;
    nova=nova+soma;
    i++;
}
printf("%d",nova);

}