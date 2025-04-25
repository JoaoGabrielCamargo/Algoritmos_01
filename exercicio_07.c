/*O codigo tem a funcao de receber duas variaveis e realizar uma somatoria, e apos isso
receber mais duas variaveis e realizar uma divisao, sendo obrigatorio um valor em float no resultado da divisao.
E incluida apenas uma biblioteca - <stdio.h> e feita a estruturacao padrao em C.
Apos, sao declaradas 6 variaveis do tipo int e uma variavel do tipo float.
O algoritmo entao inicia uma estrutura de impressao de texto para que o usuario possa informar os valores a serem calculados.
o "if" no scanf faz a funcao de validar a entrada apenas de numeros, caso o usuario introduza letras,
o algoritmo ira retornar um erro.
Apos isso e atribuido uma operacao aritmetica de soma para a variavel resultado.
Novamente o codigo inicia uma impressao de texto, para receber duas novas entradas.
O "if" tem a mesma funcao relatada anteriormente.
O algoritmo atribui uma somatoria a variavel resultado2, com os valores informados pelo usuario.
Uma estrutura condicional para retornar um erro caso o resultado2 seja 0, evitando 
divisao por zero (invalidavel).
Por fim e atribuido uma operacao de divisao a variavel de mesmo nome, com observacao para uma
transformacao dos resultados(do tipo inteiro) para float, evitando erros no processo de 
calculo, e garantindo a execucacao do codigo de acordo com o enunciado proposto.
*/

#include <stdio.h>

int main(){
    int num_01, num_02, num_03, num_04;
    int resultado;
    int resultado2;
    float divisao;
    
    printf("Digite dois valores de entrada\n");
    if(scanf("%d %d", &num_01, &num_02) != 2){
        printf("Erro no sistema, digite apenas numeros\n");
        return (0);
    }
    resultado = num_01 + num_02;
    
    printf("Digite mais dois valores\n");
    if(scanf("%d %d", &num_03, &num_04) != 2){
        printf("Erro no sistema, digite apenas nuemros\n");
        return (0);
    }
    resultado2 = num_03 + num_04;
    if(resultado2 == 0){
        printf("Erro, o divisor e 0");
        return (0);
    }
    divisao = (float)resultado / resultado2;
    
    printf("O resultado da divisao dos valores de entrada é\n%.2f", divisao);
    return (0);
}