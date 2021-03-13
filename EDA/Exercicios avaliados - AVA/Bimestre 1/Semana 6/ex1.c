#include <stdio.h>
#include <stdlib.h>

int main() {
FILE *arq1 = fopen("arq1.txt","r");
FILE *arq2 = fopen("arq2.txt","w");
char p[20];
int i=0;
if (arq1 == NULL) {
printf("Não é possível abrir arquivo base.\n");
exit(1);
}

if (arq2 == NULL) {
printf("Não é possível abrir novo arquivo.\n");
exit(1);
}
while (fscanf(arq1, "%s", p) == 1) {
i++;
fprintf(arq2, "%s ", p);
if (i==6) {
putc('\n',arq2);
}
}
}
