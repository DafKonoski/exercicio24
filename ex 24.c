//Solicitar um nome e mostrar o primeiro, o último, o quarto, do
//primeiro ao terceiro, do primeiro ao ultimo. Mostrar a posição de cada
//letra no vetor.

#include <stdio.h>

int main() {

  char nome[20];
  int y = 0;

  printf("Digite um nome:\n");
  gets(nome);

  printf("Primeiro: %c Posicao: [%d]\n", nome[0], y);
  int tam = strlen(nome);

  printf("Ultimo: %c Posicao: [%d]\n", nome[tam-1], tam-1);

  printf("Quarto: %c Posicao: [%d]\n", nome[3], 3);

  printf("do primeiro ao terceiro:\n");
  for(int j = 0; j < 3; j++){
    printf("Posicao: [%d]", j);
   printf(" %c\n", nome[j]);
  }
  printf("\n");

  printf("Do primeiro ao ultimo:\n");
  for(int x = 0; x < strlen(nome); x++){
    printf("Posicao: [%d]", x);
    printf(" %c\n", nome[x]);
  }

}
