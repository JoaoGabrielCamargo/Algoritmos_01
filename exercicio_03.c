/* O codigo que faz a inicializacao de tres entradas do tipo int.
O codigo inclui uma biblioteca padrao da linguagem C, a <stdio.h>.
Apos isso sao determinados a estrutura padrao e declarado tres variaveis do tipo inteiro.
entao o codigo retorna mensagens para o usuario digitar algum valor.
todos os valores sao guardados dentro se sua variaveis e logo apos o computador retorna o valor de cada uma. 
*/
#include <stdio.h>

int main(){
    int a, b, c;
    
    printf("Escreva o primeiro valor\n");
    scanf("%d", &a);
    printf("Escreva o primeiro valor\n");
    scanf("%d", &b);
    printf("Escreva o primeiro valor\n");
    scanf("%d", &c);
    
    printf("O primeiro valor informado e %d\n", a);
    printf("O segundo valor informado e %d\n", b);
    printf("O terceiro valor informado e %d\n", c);
    
    return 0;
}