/* O codigo apresenta uma forma de ordenar numeros de forma crescente, apesar de nao ser tao eficiente quanto uma estrutura for
O codigo apresenta uma biblioteca <stdio.h> e uma estrutura padrao em C.
Sao declarados 6 variaveis do tipo int, que irao armazenar os numeros informados pelo usuario.
O codigo imprime na tela uma mensagem pedindo os numeros - OBS e necessario apertar "enter" para que o algoritmo salve o valor em
sua determinada variavel, caso isso nao ocorra, havera erro.
O if permite que apenas numeros sejam digitados, enviando um erro ao usuario caso digite letras.
A estrutura condicional utiliza a verificacao de cada variavel para "decidir" qual o menor valor e assim por diante.
A variavel "guardar" tem a funcao de armazenar o valor temporariamente, para que o mesmo nao seja perdido no processo.
Exemplo do Funcionamento
Quando o usuario digitar os valores o algoritmo ira verificar
Se o valor do segundo numero for menor que o primeiro, ele ira armazenar o valor do numero maior dentro da variavel
"guardar", entao continuar a comparacao, ate encontrar algum valor maior, entao fara o mesmo
processo.
Apos esses processo o algoritmo retorna a mensagem com os valores em ordem crescente para o
usuario.
*/


#include <stdio.h>

int main(){
    int num_01, num_02, num_03, num_04, num_05;
    int guardar;
    
    printf("Informe cinco numeros a sua escolha\n");
    if(scanf("%d %d %d %d %d", &num_01, &num_02, &num_03, &num_04, &num_05) !=5){
        printf("Você nao digitou numeros, por favor reinicie\n");
        return (0);
    }
    
    if(num_01 > num_02){
        guardar = num_01;
        num_01 = num_02;
        num_02 = guardar;
    }
    if(num_01 > num_03){
        guardar = num_01;
        num_01 = num_03;
        num_03 = guardar;
    }
    if(num_01 > num_04){
        guardar = num_01;
        num_01 = num_04;
        num_04 = guardar;
    }
    if(num_01 > num_05){
        guardar = num_01;
        num_01 = num_05;
        num_05 = guardar;
    }
    if(num_02 > num_03){
        guardar = num_02;
        num_02 = num_03;
        num_03 = guardar;
    }
    if(num_02 > num_04){
        guardar = num_02;
        num_02 = num_04;
        num_04 = guardar;
    }
    if(num_02 > num_05){
        guardar = num_02;
        num_02 = num_05;
        num_05 = guardar;
    }
    if(num_03 > num_04){
        guardar = num_03;
        num_03 = num_04;
        num_04 = guardar;
    }
    if(num_03 > num_05){
        guardar = num_03;
        num_03 = num_05;
        num_05 = guardar;
    }
    if(num_04 > num_05){
        guardar = num_04;
        num_04 = num_05;
        num_05 = guardar;
    }
    
    printf("Em ordem crescente\n %d %d %d %d %d\n", num_01, num_02, num_03, num_04, num_05);
    return (0);
}