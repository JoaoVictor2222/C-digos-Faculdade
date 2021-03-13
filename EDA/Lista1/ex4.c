#include <stdio.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL,"");
float deposito,juros;
printf("Qual o valor do deposito: ");
scanf("%f",&deposito);
printf("Qual o valor da taxa de juros: ");
scanf("%f",&juros);

juros= (double)juros/100.0;
float juros2= deposito*juros;
float rendimento = deposito+(deposito*juros);
printf("O deposito foi de: %f \n",deposito);
printf("O juros foi de: %f \n",juros2);
printf("O rendimento foi de: %f \n",rendimento);



}
