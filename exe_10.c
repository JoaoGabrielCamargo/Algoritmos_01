#include <stdio.h>
int main(){
  int tamanho1, tamanho2;
  int i, j;
  
  printf("Digite o tamanho desejado para o primeiro vetor: ");
  scanf("%d", &tamanho1);
  printf("Digite o tamanho desejado para o segundo vetor: ");
  scanf("%d", &tamanho2);
  
  int vetor_01[tamanho1];
  int vetor_02[tamanho2];
  int vetor_final[tamanho1 + tamanho2];
  
  printf("Digite os numeros do primeiro vetor: ");
  for(i = 0; i < tamanho1; i++){
    scanf("%d", &vetor_01[i]);
  }
  printf("Digite os numeros do segundo vetor: ");
  for(j = 0; j < tamanho2; j++){
    scanf("%d", &vetor_02[j]);
  }
  for(i = 0; i < tamanho1; i ++){
    vetor_final[i] = vetor_01[i];
  }
  for(j = 0; j < tamanho2; j++){
    vetor_final[tamanho1 + j] = vetor_02[j];
  }
  printf("O vetor final, conteado ficou: ");
  for(i = 0 ; i < (tamanho1 + tamanho2); i++){
    printf("%d ", vetor_final[i]);
  }
return 0;
}
