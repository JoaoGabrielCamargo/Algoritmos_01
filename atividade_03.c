#include <stdio.h>

int main(){
  int numeros[50][50];
  int contador_01, contador_02;
  int verificar_X, verificar_Y;
  int valor_temporario, maior_numero;

  valor_temporario = 0;
  maior_numero = 0;
  
    printf("numeros a compor a matriz\n");
    scanf("%d %d", &verificar_X, &verificar_Y);
    
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
    for(contador_01 = 0; contador_01 < verificar_X; contador_01++){
     for(contador_02 = 0; contador_02 < verificar_Y; contador_02++){
      if(numeros[contador_01][contador_02] > valor_temporario){
        valor_temporario = numeros[contador_01][contador_02];
        numeros[contador_01][contador_02] = maior_numero;
        maior_numero = valor_temporario;
      } 
     }
    }
 printf("O maior elemento da matriz eh: %d\n", maior_numero);
 return(0);
}
 
