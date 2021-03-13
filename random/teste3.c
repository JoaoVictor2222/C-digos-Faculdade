#include <stdio.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL, "");

int v1;
printf("Digite um valor: ");
scanf("%d",&v1);
if(v1%2==0){
    printf("O numero é par");
}else{
    printf("o numero é impar");
}

}
