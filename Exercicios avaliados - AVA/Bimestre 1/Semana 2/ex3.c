/*3) Faça um programa que obtém o código do funcionário, o sexo, a idade e o salário de N pessoas,
 a partir do teclado, e grava os dados numa struct.  O critério de terminação é quando o usuário
  digita um código do funcionário negativo.*/

#include<stdio.h>
#include <string.h>

 void main (void){
 typedef struct {
    int cod;
    int sexo;
    int idade;
    float salario;
} Funcionario;

Funcionario func[5];
int i=0;
for(i=0; i<5; i++) {

    printf(" Digite o codigo do funcionario: ");
    scanf("%d%*c", &func[i].cod);
    if(func[i].cod<0){
        break;
    }
    printf(" Digite o sexo do funcionario (1-homem 2-mulher): ");
    scanf("%d%*c", &func[i].sexo);
    printf(" Digite a idade do funcionario: ");
    scanf("%d%*c", &func[i].idade);
    printf(" Digite o salario do funcionario: ");
    scanf("%f%*c", &func[i].salario);

    printf("\n=============================\n");
}

 }
