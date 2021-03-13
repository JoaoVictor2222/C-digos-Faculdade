/*13) Considere um vetor com 30 elementos. Verificar se existe um elemento no vetor que seja igual ao valor k
(lido no algoritmo). Se existir, mostrar a posição em que se encontra no vetor, senão, imprimir “Não foi
encontrado o valor no vetor”.*/

void main (void){
int vet[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
int k;
printf("Digite o valor de k: ");
scanf("%d",&k);
int i=0;
int pos;
while(i<30){

if(vet[i]==k){
    pos=i;
    printf("%Posicao:%d",pos);
    break;


}
i++;
}

}



