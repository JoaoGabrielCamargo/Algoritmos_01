/*
 O codigo tem a funcao de relizar uma divisao e entao retornar um numero inteiro.
 O codigo possui 6 variaveis do tipo inteiro. 
 Foi utilizado duas bibliotecas - <stdio.h> e <stdlib>.
 O algoritmo pede para o usuario digitae dois valores, e esses valores sao armazenados em suas respectivas variaveis.
 Apos isso o codigo verifica se o denominador e zero, caso for retorna um erro.
 Depois disso verifica se o denominador (num_02) e maior que 0 ou menor que 0, para continuar a conta.
 Caso seja, sao atribuidos o restante das variaveis do tipo inteiro informadas anteriormente.
 A primeira operacao realiza a divisao entre num_01 e num_02.
 A segunda operacao faz a operacao com "%" para obter-se o resto.
 A variavel "positivo_negativo", tem a funcao de validar se o valor da divisao e positivo ou negativo.
 Obs: Dois numeros postivos, retornam um resultado positivo, dois numeros negativos retornam um positivo
 e divergencia de sinais retorna um resultado negativo.
 O operador ternario avalia se as condições sao falsas ou verdadeiras, atribuindo o valor positivo ou negativo, mencionado anteriormente.
 Apos isso o algoritmo valida um arrendondamento para manter um valor inteiro mais preciso.
 Caso o valor absuluto do resto multiplicado por 2 seja maior/igual ao valor absoluto
 de num_02, ele executa uma nova condicao para avaliar se o arrendondamento sera de um numero negativo
 ou um numero positivo.
 Explicacao valor absoluto
 Caso o numero informado seja 13/5, o resto de sua divisao sera 3.
 funcao desse "if" e calcular se o numero pode ser arredondado, sendo usado *2
 para comparar se o numero corresponde a pelo menos a metade do numero absoluto de num_02.
 entao, 13/5 tendo resto 3, o codigo ira realizar a validacao, chegando a 6>5... Ou seja, ele pode ser 
 arrendondado. O contrario tambem ocorre.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int num_01, num_02, resultado;
    
    printf("Digite um valor\n");
    scanf("%d", &num_01);
    printf("Digite um valor\n");
    scanf("%d", &num_02);
    
    if(num_02 == 0){
        printf("A conta não pode continuar\n");
        return (0);
    }
    if((num_02 > 0) || (num_02 < 0)){
        int divisao = num_01 / num_02;
        int resto = num_01 % num_02;
        int positivo_negativo = ((num_01 > 0) && (num_02 > 0) || (num_01 < 0) && (num_02 < 0)) ? 1 : -1;
        if(abs(resto) * 2 >= abs(num_02)){
            if(positivo_negativo < 0){
                resultado = divisao - 1;
            }
            if(positivo_negativo > 0){
                resultado = divisao + 1;
            }
        }else{
            resultado = divisao;
        }
        printf("O resultado e %d\n", resultado);
    }    
    return (0);
}