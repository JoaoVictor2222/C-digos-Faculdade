#include <stdio.h>
#include <locale.h>

void main(void)
{
setlocale(LC_ALL, "");
int i = 0;

while(i<=50){
    if(i%2==0){
        printf("%d é par \n",i);
    }else{
        printf("%d é impar \n",i);
    }
    i++;
}
}
