/*
O algoritmo tem a funcao de informar se o numero digitado pelo usuario e par ou impar.
E declarado apenas uma biblioteca padrao - <stdio.h> e a estruturacao do codigo e padrao.
O codigo possui apenas uma variavel do tipo int.
O codigo realiza a impressao de um texto, pedindo um numero.
Apos guardar o valor informado na variavel correspondente, o codigo realiza uma estrutura condicional.
Utilizando o operador de modulo "%", o algoritmo avalia se o resto da divisao por 2 com o numero informado pelo usuario retorna o valor 0,
se retornar zero, o codigo informa se o numero e par ou impar, caso o resultado seja diferenre de 0.
 */

#include<stdio.h>

int main(){
    int numero;
    
    printf("Digite um numero\n");
    scanf("%d", &numero);
    if(numero % 2 == 0){
        printf("O nunero e par");
    }else{
        printf("O numero e impar");
    }
    return (0);
}