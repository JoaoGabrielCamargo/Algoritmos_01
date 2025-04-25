/*O algoritmo recebe um valor em float e retorna o valor
O algoritmo inclui uma biblioteca <stdio.h> e uma estrutura padrao em C.
O codigo declara um valor em float e apos isso imprime uma mensagem na tela.
O valor digitado pelo usuario e armazenado na variavel correspondente.
Apos isso o codigo retorna um printf dizendo o valor que foi armazenado.
*/

#include <stdio.h>

int main(){
    float numero_01;
    
    printf("Digite o valor ");
    scanf("%f", &numero_01);
    printf("O valor que voce digitou e %.2f", numero_01);
    return(0);
}