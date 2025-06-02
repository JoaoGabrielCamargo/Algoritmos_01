#include <stdio.h>

int main(){
  int matriz[50][50];
  int contador_01, contador_02;
  int linhas, colunas;
  
  printf("Numero de linhas: ");
  scanf("%d", &linhas);
  printf("Numero de colunas: ");
  scanf("%d", &colunas);
  printf("\n");
  
  for(contador_01 = 0; contador_01 < linhas; contador_01++){
      for(contador_02 = 0; contador_02 < colunas; contador_02++){
      printf("Elemento [%d][%d]:\n", contador_01,contador_02);
      scanf("%d", &matriz[contador_01][contador_02]);
      }
  }
  printf("\n");
  printf("Matriz\n");
  for(contador_01 = 0; contador_01 < linhas; contador_01++){
      for(contador_02 = 0; contador_02 < colunas; contador_02++){
      printf("%d\t", matriz[contador_01][contador_02]);
      }
      printf("\n");
  }
return(0);  
} 