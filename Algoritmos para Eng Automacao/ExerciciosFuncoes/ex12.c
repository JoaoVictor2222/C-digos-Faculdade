#include <stdio.h>

void maior(int x,int y){

if(x>y){
printf("O primeiro eh maior \n");

}else{
printf("o segundo eh maior \n");
}
}


void main(void){
int x,y;

printf("Digite o primeiro numero: ");
scanf("%d",&x);

printf("Digite o segundo numero: ");
scanf("%d",&y);


maior(x,y);

}


