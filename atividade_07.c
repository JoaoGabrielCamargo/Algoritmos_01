#include <stdio.h>

int main(){
  int linhas, colunas;
  int matriz[100][100];
  int matriz_transposta[100][100];
  int contador, contador_2;
  int temporario;
  
  printf("Tamanho das matrizes: ");
  scanf("%d %d", &linhas, &colunas);
  
  for(contador = 0; contador < linhas; contador++){
    for(contador_2 = 0; contador_2 < colunas; contador_2++){
      scanf("%d", &matriz[contador][contador_2]);
    }
  }
  printf("\n");
  printf("Matriz\n");
  for(contador = 0; contador < linhas; contador++){
    for(contador_2 = 0; contador_2 < colunas; contador_2++){
      printf("%d\t", matriz[contador][contador_2]);
    }
    printf("\n");
  }
  
  temporario = linhas;
  linhas = colunas;
  colunas = temporario;
  
  for(contador_2 = 0; contador_2 < linhas; contador_2++){
    for(contador = 0; contador < colunas; contador++){
      matriz_transposta[contador_2][contador] = matriz[contador][contador_2];
    }
  }
  printf("\n");
  printf("Matriz Transposta\n");
  for(contador_2 = 0; contador_2 < linhas; contador_2++){
    for(contador = 0; contador < colunas; contador++){
      printf("%d\t", matriz_transposta[contador_2][contador]);
    }
    printf("\n");
  }
return(0);
}
