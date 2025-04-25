/* 
Codigo que armazena os valores largura(x), altura(y) e profundidade (z) informados
pelo usuario.
E utilizado apenas uma biblioteca <stdio.h> e uma estrutura padrao em C.
Sao declarados tres variaveis do tipo float.
O algoritmo envia uma mensagem pedindo os valores e os armazena em suas respectivas
variaveis.
Apos isso o codigo imprime uma mensagem informando os valores digitados pelo usuario, com duas casas decimais.
 */

#include <stdio.h>

int main(){
    float altura, profundidade, largura;

    printf("Digite os valores da altura,\nprofundidade e largura em metros\n");
    scanf("%f %f %f", &altura, &profundidade, &largura);
    printf("Os valores informados são\n%.2fm de altura\n%.2fm de profundidade\n%.2fm de largura\n", altura, profundidade, largura);
    return (0);
}