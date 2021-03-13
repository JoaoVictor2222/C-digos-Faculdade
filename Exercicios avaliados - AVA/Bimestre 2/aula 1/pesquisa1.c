#include <stdio.h>

int pesquisa(int vet[], int n, int x){
    int i;
    for (i = 0; i < n; i++)
        if (vet[i] == x)
            return i;
    return -1;
}

int main(void){
    int vet[] = { 5, 8, 12, 22, 66 };
    int x;
    printf("Digite o numero: ");
    scanf("%d",&x);
    int n = sizeof(vet) / sizeof(vet[0]);
    int resultado = pesquisa(vet, n, x);
    (resultado == -1)
        ? printf("Elemento nao esta presente no vetor")
        : printf("Elemento esta presente na posicao: %d", resultado);
    return 0;
}
