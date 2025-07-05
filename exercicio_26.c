#include <stdio.h>

int main(){
  int numero01, numero02;
  int soma;
  
  printf("Digite o valor do primeiro numero da soma\n");
  if(scanf("%d", &numero01) != 1){
  	printf("Voce nao digitou um numero\n");
  	return(1);
  }
  printf("Digite o valor do segundo numero da soma\n");
  if(scanf("%d", &numero02) != 1){
  	printf("Voce nao digitou um numero\n");
  	return(0);
  }
  
  soma = numero01 + numero02;
  if(soma >= 10){
    printf("a soma dos dois numeros e maior ou igual a 10\n");
   }else{
    printf("a soma dos dois numeros e menor que 10\n");
   }
return(0);
}
