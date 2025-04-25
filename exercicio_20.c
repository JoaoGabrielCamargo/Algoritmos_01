/*
Algoritmo que retorna e letras em ordem alfabetica.
Levando em conta o enunciado de numeros em ordem crescente, a aplicacao e a mesma.
E usado uma biblioteca <stdio.h> e uma estrutura padrao em C.
Sao declaradas 3 variaveis do tipo char 
O codigo imprime uma mensagem para o usuario informar as letras.
OBS- As letras precisam receber "enter" antes de declarar a proxima.
A estrutura condicional teste se o valor da letra e menor que sua sucessora, e assim por diante.
A variavel guardar, serve para armazenar o valor temporariamente, evitando a perda de algumas das variaveis
durante o processo de validacao.
Apos constatar a ordem correta, o algoritmo retorna um printf com as letras em ordem
alfabetica.
Esse sistema nao tao preciso quando usar o for, mas funciona com codigos pequenos.
 */
#include <stdio.h>

int main(){
     char letra01, letra02, letra03, guardar;
     
     printf("Digite três caracteres\n");
     scanf(" %c %c %c", &letra01, &letra02, &letra03);
     
     if(letra01 > letra02){
         guardar = letra01;
         letra01 = letra02;
         letra02 = guardar;
     }
     if(letra01 > letra03){
         guardar = letra01;
         letra01 = letra03;
         letra03 = guardar;
     }
     if(letra02 > letra03){
         guardar = letra02;
         letra02 = letra03;
         letra03 = guardar;
     }
     printf("Os caracteres em ordem alfabetica ficam\n %c %c %c\n", letra01, letra02, letra03);
     return (0);
}