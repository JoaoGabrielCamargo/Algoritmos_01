/* 
O algoritmo realiza uma operacao de soma e retorna se o valor e maior ou igual a 10.
O algoritmo inclui uma biblioteca <stdio.h> e uma estrutura padrao em C.
Declara tres variaveis do tipo int.
O codigo imprime uma mensagem na tela, e armazena o valor digitado pelo usuario
na variavel correspondente.
o "if" no scanf serve para impedir que letras sejam digitados, se isso ocorrer
uma mensagem de erro ira aparecer.
Apos o algoritmo imprimir e armazenar os dois valores, e apos isso realiza uma
operacao aritmetica na variavel "soma".
Na estrutura condicional se o resultado for maior ou igual a 10, ira 
imprimir uma mensagem na tela, caso o contrario ocorra, ira imprimir outra mensagem.
*/

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
