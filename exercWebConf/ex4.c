#include <stdio.h>
int main() {
    char string[1000],letra;
    int cont = 0;
    int freq[255];
    int max,ascii;
    int i;
    printf("Digite uma frase: ");
    fgets(string, sizeof(string), stdin);
    for (i = 0; string[i] != '\0'; ++i) {
    if ('a' == string[i])
           ++cont;
    }


    for(i=0; i<255; i++){
        freq[i] = 0;
    }
    i=0;
    while(string[i] != '\0')
    {
        ascii = (int)string[i];
        freq[ascii]++;
        i++;
    }

        max = 0;
    for(i=0; i<255; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }
    printf("Caractere que mais aparece: %c = %d vezes.\n", max, freq[max]);
    printf("Numero de <a>: %d",cont);
    return 0;
}
