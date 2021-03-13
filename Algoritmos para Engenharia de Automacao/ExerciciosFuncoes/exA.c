#include <stdio.h>

void absoluto(float n){

if(n<0){
n = n*-1;
printf("%f \n",n);
}else{
if(n>=0){
n=n*1;
printf("%f \n",n);
}
}
}

void main(void){

float n;
printf("Digite um numero real: ");
scanf("%f",&n);

absoluto(n);


}
