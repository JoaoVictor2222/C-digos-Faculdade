#include <stdio.h>
#include <stdlib.h>

int main(){

    struct matriz_3D {
        int* matriz;
        int a,b,c;
        int posicao;
    };

    struct matriz_3D q;

    int i,j,k;

    q.a = 4;
    q.b = 3;
    q.c = 2;

    q.matriz = malloc (sizeof (int) * q.a*q.b*q.c);

    for( i=0 ; i<q.a ; i++){
        for ( j=0; j<q.b ; j++){
            for ( k=0 ; k<q.c ; k++){
                q.posicao = i*(q.b*q.c) + j*(q.c) + k;
                q.matriz[q.posicao] = i+j+k;
                printf("%d matriz %d %d %d = %d \n", q.posicao,i,j,k,q.matriz[q.posicao]);
            }
        }
    }

    free ( q.matriz );
}
