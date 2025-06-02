#include <stdio.h>

int main(){
  int tamanho;
  int matriz_a[100][100];
  int matriz_b[100][100];
  int matriz_c[100][100];
  int matriz_temp[100][100];
  int contador, contador_2, contador_3;
  
  printf("Tamanho das matrizes: ");
  scanf("%d", &tamanho);
  
  for(contador = 0; contador < tamanho; contador++){
    for(contador_2 = 0; contador_2 < tamanho; contador_2++){
      scanf("%d", &matriz_a[contador][contador_2]);
    }
  }
  for(contador = 0; contador < tamanho; contador++){
    for(contador_2 = 0; contador_2 < tamanho; contador_2++){
      scanf("%d", &matriz_b[contador][contador_2]);
    }
  }
  for(contador = 0; contador < tamanho; contador++){
    for(contador_2 = 0; contador_2 < tamanho; contador_2++){
      matriz_c[contador][contador_2] = 0;
    }
  }
  for(contador = 0; contador < tamanho; contador++){
    for(contador_2 = 0; contador_2 < tamanho; contador_2++){
        for(contador_3 = 0; contador_3 < tamanho; contador_3++){
          matriz_c[contador][contador_2] += matriz_a[contador][contador_3] * matriz_b[contador_3][contador_2];
        }  
    }
  }
  printf("\n");
  printf("Matriz A\n");
  for(contador = 0; contador < tamanho; contador++){
    for(contador_2 = 0; contador_2 < tamanho; contador_2++){
      printf("%d\t", matriz_a[contador][contador_2]);
    }
    printf("\n");
  }
  printf("\n");
  printf("Matriz B\n");
  for(contador = 0; contador < tamanho; contador++){
    for(contador_2 = 0; contador_2 < tamanho; contador_2++){
      printf("%d\t", matriz_b[contador][contador_2]);
    }
    printf("\n");
  }
  printf("\n");
  printf("Matriz C\n");
  for(contador = 0; contador < tamanho; contador++){
    for(contador_2 = 0; contador_2 < tamanho; contador_2++){
      printf("%d\t", matriz_c[contador][contador_2]);
    }
    printf("\n");
  }
return(0);
}
