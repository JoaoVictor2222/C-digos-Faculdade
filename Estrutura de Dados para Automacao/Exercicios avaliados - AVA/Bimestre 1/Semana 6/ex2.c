#include <stdio.h>

#include <stdlib.h>

#include <string.h>

typedef struct {
  int codigo;
  char nome[20];
  int ativo;
}
Cliente;

void inserir() {
FILE * arquivo = fopen("arq.dat", "a+b");
Cliente c;
printf("Informe o código do usuario: ");
scanf("%d", & c.codigo);
printf("Informe o nome do usuário: ");
scanf("%s", c.nome);
c.ativo = 1;
int teste = fwrite( & c, sizeof(c), 1, arquivo);
if (ferror(arquivo)) printf("Erro ao inserir os dados. Linha 21\n");
else printf("\nCadastro realizado com sucesso. %d\n", teste);
fclose(arquivo);
}

void excluir(int code) {
FILE * arquivo = fopen("arq.dat", "r+b");
int aux, i = 0;
Cliente c;
fseek(arquivo, sizeof(c) * 0, SEEK_SET);
while (!feof(arquivo)) {
fread( & c, sizeof(c), 1, arquivo);
if (c.codigo == code) {
printf("Usuario: %s\nCodigo: %d\n\nDeseja excluir?\n[1] Sim\n[2] Nao\n>>>>\t", c.nome, c.codigo);
scanf("%d", & aux);
if (aux == 1) {
fseek(arquivo, (sizeof(c) * i), SEEK_CUR - 1);
c.ativo = 0;
fwrite( & c, sizeof(c), 1, arquivo);
printf("Usuario excluido com sucesso.\n");
break;
} else printf("Dados não excluídos.\n");
}
i++;
}
fclose(arquivo);
}

void alterar(int code) {
FILE * arquivo = fopen("arq.dat", "r+b");
Cliente c;
fseek(arquivo, sizeof(c) * 0, SEEK_SET);
int i = 0;
while (!feof(arquivo)) {
fread( & c, sizeof(c), 1, arquivo);
if (c.codigo == code) {
int aux;
if (c.ativo == 0) {
printf("Registro excluido anteriormente.\nDeseja criar novamente?\n[1] Sim\n[2] Nao\n>>>>\t");
scanf("%d", & aux);
if (aux == 1) {
printf("Escolha a opcao '1'\n");
} else if (aux == 2) break;
} else if (c.ativo == 1) {
printf("O que deseja alterar?\n[1] Nome\n[2] Codigo\n");
scanf("%d", & aux);
if (aux == 1) {
fseek(arquivo, (sizeof(c) * i), SEEK_CUR - 1);
printf("Digite o novo nome: ");
scanf("%s", c.nome);
fwrite( & c, sizeof(c), 1, arquivo);
printf("Nome alterado com sucesso.\n");
} else if (aux == 2) {
fseek(arquivo, (sizeof(c) * i), SEEK_CUR - 1);
printf("Digite o novo codigo: ");
scanf("%d", & c.codigo);
fwrite( & c, sizeof(c), 1, arquivo);
printf("Codigo alterado com sucesso.\n");
}
}
break;
}
i++;
}
fclose(arquivo);
}

void consultar(int code) {
FILE * arquivo = fopen("arq.dat", "a+b");
int aux = 0;
Cliente c;
fseek(arquivo, sizeof(c) * 0, SEEK_SET);
while (!feof(arquivo)) {
fread( & c, sizeof(c), 1, arquivo);
if (c.codigo == code && c.ativo == 1) {
printf("\nNome: %s\nCodigo: %d\n", c.nome, c.codigo);
aux = 1;
break;
}
}
if (aux == 0) printf("O codigo nao existe em nosso banco de dados.\n");
fclose(arquivo);
}

void listar() {
  FILE * arquivo = fopen("arq.dat", "r+b");
  Cliente c;
  fseek(arquivo, sizeof(c) * 0, SEEK_SET);
  while (!feof(arquivo)) {
    if (fread( & c, sizeof(c), 1, arquivo) == 1) printf("Codigo = %d\nNome = %s\nAtivo = %d\n\n", c.codigo, c.nome, c.ativo);
    else break;
  }
  fclose(arquivo);
}

int main() {
  int opcao, temp = 0;
  printf("1 - Inserir dados\n2 - Excluir dados\n3 - Alterar dados\n4 - Consultar dados\n5 - Listar dados\n6 - Sair\n");
  printf("\nEscolha o que deseja\n");
  printf(">>>>\t");
  scanf("%d", & opcao);


  while ((opcao > 0) && (opcao < 7)) {
    switch (opcao) {
    case 1:
      inserir();
      printf("\n");
      break;
    case 2:
      printf("Qual o codigo do usuario que deseja excluir? ");
      scanf("%d", & temp);
      excluir(temp);
      printf("\n");
      temp = 0;
      break;
    case 3:
      printf("Qual o codigo do usuario que deseja alterar? ");
      scanf("%d", & temp);
      alterar(temp);
      printf("\n");
      temp = 0;
      break;
    case 4:
      printf("Qual o codigo que deseja consultar? ");
      scanf("%d", & temp);
      consultar(temp);
      printf("\n");
      temp = 0;
      break;
    case 5:
      printf("Listando registros\n");
      listar();
      break;
    case 6:
      printf("Saindo do programa...\n");
      exit(1);
      break;
    }
    printf("1 - Inserir dados\n2 - Excluir dados\n3 - Alterar dados\n4 - Consultar dados\n5 - Listar dados\n6 - Sair\n");
    printf("\nEscolha o que deseja\n");
    printf(">>>>\t");
    scanf("%d", & opcao);
  }
}
