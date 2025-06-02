#include <stdio.h>

int main(){
  int numeros[50][50];
  int contador_01, contador_02;
  int linhas, colunas;
  int busca_X, busca_Y;
  
  printf("Numero de linhas: ");
  scanf("%d", &linhas);
  printf("Numero de colunas: ");
  scanf("%d", &colunas);
  printf("\n");
  
  for(contador_01 = 0; contador_01 < linhas; contador_01++){
      for(contador_02 = 0; contador_02 < colunas; contador_02++){
      printf("Elemento [%d][%d]:\n", contador_01,contador_02);
      scanf("%d", &numeros[contador_01][contador_02]);
      }
  }
  for(contador_01 = 0; contador_01 < linhas; contador_01++){
      for(contador_02 = 0; contador_02 < colunas; contador_02++){
      printf("%d\t", numeros[contador_01][contador_02]);
      }
      printf("\n");
  }
  printf("\n");
  printf("O elemento desejado está aonde?\n");
  printf("Digite a posicao do elemento: (linha e coluna comecando em 0)\n");
  scanf("%d %d", &busca_X, &busca_Y);
  if(((busca_X >= 0) && (busca_X < linhas)) && ((busca_Y >= 0) && (busca_Y < colunas))){
      printf("O elemento que voce busca eh: %d\n", numeros[busca_X][busca_Y]);
  }else{
      printf("Posicao invalida");
  }
return(0);  
} 