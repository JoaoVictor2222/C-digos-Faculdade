#include <stdio.h>

void main(void){

int a,b,final=1;
printf("Digite valor de a: ");
scanf("%d",&a);
printf("Digite valor de b: ");
scanf("%d",&b);

int contador = 0;

while(b>contador){

final=final*a;

contador++;
}
printf("%d \n",final);
}
