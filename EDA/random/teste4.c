#include <stdio.h>
#include <locale.h>

void main(void)
{
setlocale(LC_ALL, "");
int i = 0;

while(i<=50){
    if(i%2==0){
        printf("%d � par \n",i);
    }else{
        printf("%d � impar \n",i);
    }
    i++;
}
}
