/*
O codigo tem a funcao de calcular a media de tres numeros inteiros, retornando um numero real.
O codigo possui uma biblioteca <stdio.h> e uma estrutura padrao em C.
Sao declaradas tres variaveis do tipo int e uma do tipo float.
Apos isso o algoritmo imprime mensagens ao usuario e armazena os valores em suas respectivas
variaveis.
Entao a variavel "media" recebe uma operacao aritmetica como valor.
Os valores em inteiros sao convertidos em float, usando "(float)".
O algoritmo apos isso retorna o valor da media dos tres numeros, usando apenas dois numeros
decimais como precisao.
 */

#include <stdio.h>

int main(){
    int numero01, numero02, numero03;
    float media;
    
    printf("Digite a primeira nota\n");
    scanf("%d", &numero01);
    printf("Digite a segunda nota\n");
    scanf("%d", &numero02);
    printf("Digite a terceira nota\n");
    scanf("%d", &numero03);
    
    media = (float)((numero01) + (numero02) + (numero03)) / 3;
    
    printf("A media das notas e %.2f\n", media);
    return(0);
}