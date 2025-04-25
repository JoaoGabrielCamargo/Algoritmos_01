/*
O codigo tem a funcao de calcular a resistencia equivalente de um sistema paralelo.
O algoritmo inclui uma biblioteca <stdio.h> e uma estrutura padrao em C.
Foi declarado tres variaveis do tipo float.
O algoritmo imprime mensagens para que o usuario informe os valores.
Apos isso a variavel "resistencia_equivalente" recebe uma operacao aritmetica.
A operacao e ((resistencia01 * resistencia02)) / ((resistencia01 + resistencia02)).
Apos isso o algoritmo ira imprimir uma mensagem informando o valor da resistencia equivalente.
 */

#include <stdio.h> 

int main(){
    float resistencia01, resistencia02, resistencia_equivalente;
    
    printf("Informe o valor da resistencia 1 \n");
    scanf("%f", &resistencia01);
    printf("Informe o valor da resistencia 2 \n");
    scanf("%f", &resistencia02);
    
    resistencia_equivalente = ((resistencia01) * (resistencia02)) / ((resistencia01) + (resistencia02));
    
    printf("O valor da resistencia equivalente em Ohms e %f\n", resistencia_equivalente);
    return(0);
}