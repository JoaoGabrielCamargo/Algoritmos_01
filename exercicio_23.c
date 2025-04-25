/*
O algoritmo tem a funcao de mostrar a sequencia de fibonacci.
O algoritmo tem uma biblioteca <stdio.h> e uma estrutura padrao em C.
O algoritmo possui cinco variaveis do tipo int.
numero_01 e numero_02 representam os primeiros numeros da sequencia.
O algoritmo pergunta quantos numeros havera na sequencia
O primeiro if considera se o usuario informou apenas um numero para a sequencia, se isso ocorrer ele
informa o primeiro numero da sequencia.
o segundo if considera se o usuario informou apenas dois numeros para a sequencia, se isso ocorrer ele
informa o primeiro e o segundo numero da sequencia.
Caso o usuario digite mais numeros o algoritmo ira executar o for.
A estrutura do for declara um contador do tipo int com valor 3, ja que dois valores ja foram
impressos.
O for ira se manter ate que o contador02 seja menor que contador.
Enquanto isso nao ocorra, ele ira colocar operador aritmetica a variavel
proximo.
Em seguida dentro do loop, o algoritmo ira imprimir o valor de "proximo"
e ira tornar o numero_01 no numero_02 e o numero_02 ira se tornar o proximo.


*/


#include <stdio.h>

int main(){
    int numero_01, numero_02, proximo;
    int contador_02;
    
    numero_01 = 0;
    numero_02 = 1;
    
    printf("Digite quantas sequenciais voce quer\n");
    scanf("%d", &contador_02);
    
    if(contador_02 >= 1){
        printf("%d ", numero_01);
    }
    if(contador_02 >= 2){
        printf("%d ", numero_02);
    }
    for(int contador = 3; contador <= contador_02; contador++){
        proximo = numero_01 + numero_02;
        printf("%d ", proximo);
        numero_01 = numero_02;
        numero_02 = proximo;
    }
    printf("\n");
return(0);    
}