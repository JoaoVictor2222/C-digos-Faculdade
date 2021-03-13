#include <stdio.h>

void funct(int x,char y){
int i=0;
while(i<x){

printf("%c \n",y);
i++;
}

}

void main(void){

int x;
char y;
printf("Digite o numero de repticoes: ");
scanf("%d",&x);

getchar();
 
printf("Digite o char: ");
scanf("%c",&y);

funct(x,y);


}
