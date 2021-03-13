#include <stdio.h>

void troca(int *xp, int *yp){

    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int vet[], int n){
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (vet[j] > vet[j+1])
              troca(&vet[j], &vet[j+1]);
}

void mostraVet(int vet[], int tamanho){
    int i;
    for (i=0; i < tamanho; i++)
        printf("%d ", vet[i]);
    printf("\n");
}
int main(){
    int vet[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(vet)/sizeof(vet[0]);
    bubbleSort(vet, n);
    printf("Vetor Ordenado: \n");
    mostrarVet(vet, n);
    return 0;
}
