/* 
O algoritmo realiza a entrada de um float e depois o transforma em inteiro
e o imprime em inteiro.
O algoritmo inclui uma biblioteca <stdio.h> e uma estrutura padrao em C.
O algoritmo declara uma variavel do tipo float e outra do tipo int.
O codigo imprime uma mensagem na tela e armazena o valor digitado pelo usuario,
apos isso transforma o numero informado em outro, so que como vsriavel inteiro.
*/
#include <stdio.h>

int main(){
    float numero_01;
    int numero_02;
    
    printf("Digite um valor\n");
    scanf("%f", &numero_01);
    
    numero_02 = (int)numero_01;
    printf("O valor em inteiro e %d", numero_02);
    return(0);
}