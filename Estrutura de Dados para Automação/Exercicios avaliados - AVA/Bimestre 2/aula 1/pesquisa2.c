#include <stdio.h>

int pesquisaBinaria(int vet[], int l, int r, int x){
    if (r >= l) {
        int meio = l + (r - l) / 2;

        if (vet[meio] == x)
            return meio;
        if (vet[meio] > x)
            return pesquisaBinaria(vet, l, meio - 1, x);
        return pesquisaBinaria(vet, meio + 1, r, x);
    }
    return -1;
}

int main(void){
    int vet[] = { 5, 8, 12, 22, 66 };
    int n = sizeof(vet) / sizeof(vet[0]);
    int x;
    printf("Digite o numero: ");
    scanf("%d",&x);
    int resultado = pesquisaBinaria(vet, 0, n - 1, x);
    (resultado == -1) ? printf("Elemento nao esta presente no vetor")
                   : printf("Elemento esta presente na posicao: %d",
                            resultado);
    return 0;
}
