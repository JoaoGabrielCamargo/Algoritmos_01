#include <stdio.h>
int main(){
  int numeros[4];
  int i, escolha;
  
  printf("Digite os numeros: ");
  for(i = 0; i < 4; i++){
    scanf("%d", &numeros[i]);
  }
  printf("Digite a posicao que deseja ver: ");
  scanf("%d", &escolha);
  if((escolha >= 1) && (escolha <= 4)){
    printf("%d", numeros[escolha - 1]);
  }
  else{
    return 1;
  }
return 0;
}
