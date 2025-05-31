#include <stdio.h>

int main(){
  int numeros[50][50];
  int contador_01, contador_02;
  int soma, verificar_X, verificar_Y;
  float media;
  
    printf("numeros a compor a matriz\n");
    scanf("%d %d", &verificar_X, &verificar_Y);
    soma = 0;
    
    if((verificar_X > 50) || (verificar_Y > 50)){
      printf("erro no sistema");
      return(1);
    }
    for(contador_01 = 0; contador_01 < verificar_X; contador_01++){
     for(contador_02 = 0; contador_02 < verificar_Y; contador_02++){
      printf("\nelemento[%d][%d]\n", contador_01, contador_02);
      scanf("%d", &numeros[contador_01][contador_02]);
     }
    }
    for(contador_01 = 0; contador_01 < 3; contador_01++){
     for(contador_02 = 0; contador_02 < 3; contador_02++){
      soma += numeros[contador_01][contador_02];
     }
    media = ((float)(soma / (verificar_X * verificar_Y)));
    }
 printf("A media dos elementos eh: %d\n", media);
 return(0);
}
 
