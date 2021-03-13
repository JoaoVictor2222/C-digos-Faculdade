#include <stdio.h>

int soma(int x,int y){

int soma1 = x*x+y-x+y*y;
int soma2 = soma1 + x*x*x+y*y*y;
int somat = soma1+soma2;
return somat;
}

void main(void){
int x=1,y=2;
while(x<=5 && y<=6){
int somatorio = soma(x,y);
printf("%d \n",somatorio);
x++;
y++;
}
}



