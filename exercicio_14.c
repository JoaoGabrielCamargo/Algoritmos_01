/*
O codigo tem a funcao de armazenar dois numeros do tipo float e cinco do tipo char.
Foi incluido uma biblioteca <stdio.h> e uma estrutura padrao em C.
O codigo possui 2 variaveis float e, cinco variaveis do tipo char.
O algoritmo envia diversar mensagens ao usuario, e cada valor e armazenado em sua variavel definida.
Apos isso, uma mensagem de informando que os valores foram armazenados e imprimida na tela.
 */

#include <stdio.h>

int main(){
    float numero01, numero02;
    char letra01, letra02, letra03, letra04, letra05;
    
    printf("digite um valor\n");
    scanf("%f", &numero01);
    printf("digite um valor\n");
    scanf("%f", &numero02);
    printf("Digite uma letra\n");
    scanf(" %c", &letra01);
    printf("Digite uma letra\n");
    scanf(" %c", &letra02);
    printf("Digite uma letra\n");
    scanf(" %c", &letra03);
    printf("Digite uma letra\n");
    scanf(" %c", &letra04);
    printf("Digite uma letra\n");
    scanf(" %c", &letra05);
    
    printf("os valores foram armazenados\n");
    return(0);
}