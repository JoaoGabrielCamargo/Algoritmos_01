#include <stdio.h>

int main(){
  int matriz[50][50];
  int transposta[50][50];
  int contador_01, contador_02;
  int linhas, colunas, temporario;
  int simetrica;
  
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
  temporario = linhas;
  linhas = colunas;
  colunas = temporario;
  for(contador_02 = 0; contador_02 < linhas; contador_02++){
      for(contador_01 = 0; contador_01 < colunas; contador_01++){
          transposta[contador_02][contador_01] = matriz[contador_01][contador_02];
      }
  }
  printf("\n");
  printf("Matriz transposta\n");
  for(contador_02 = 0; contador_02 < linhas; contador_02++){
      for(contador_01 = 0; contador_01 < colunas; contador_01++){
      printf("%d\t", transposta[contador_02][contador_01]);
      }
      printf("\n");
  }
  if(colunas != linhas){
      simetrica = 1;
  }
  if(colunas == linhas){
      for(contador_01 = 0; contador_01 < linhas; contador_01++){
          for(contador_02 = 0; contador_02 < colunas; contador_02++){
              if(matriz[contador_01][contador_02] == transposta[contador_01][contador_02]){
                  simetrica = 0;
              }else{
                  simetrica = 1;
                  break;
              }
              if(simetrica == 1){
                  break;
              }    
          }
      }
  }
  printf("\n");
  if(simetrica == 0){
      printf("As matrizes sao simetricas\n");
  }
  if(simetrica == 1){
      printf("As matrizes nao sao simetricas\n");
  }
return(0);  
} 