#include <stdio.h>

void troca(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void ornenacaoSelecao(int vet[], int n){
    int i, j, min_idx;
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (vet[j] < vet[min_idx])
            min_idx = j;
        troca(&vet[min_idx], &vet[i]);
    }
}

void mostrarVet(int vet[], int tam){

    int i;
    for (i=0; i < tam; i++)
        printf("%d ", vet[i]);
    printf("\n");
}

int main()
{
    int vet[] = {64, 25, 12, 22, 11};
    int n = sizeof(vet)/sizeof(vet[0]);
    ornenacaoSelecao(vet, n);
    printf("Vetor Ordenado: \n");
    mostrarVet(vet, n);
    return 0;
}
