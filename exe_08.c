#include <stdio.h>
int main(){
  int numeros[4];
  int i, valor_novo,escolha;
  
  printf("Digite os numeros: ");
  for(i = 0; i < 4; i++){
    scanf("%d", &numeros[i]);
  }
  printf("Digite a posicao do vetor que deseja alterar ");
  scanf("%d", &escolha);
  if((escolha >= 1) && (escolha <=4)){
    printf("Insira o novo valor: ");
    scanf("%d", &valor_novo);
    
    numeros[escolha - 1] = valor_novo;
    
    for(i = 0; i < 4; i++){
    printf("%d ", numeros[i]);
    }
  }
return 0; 
}
