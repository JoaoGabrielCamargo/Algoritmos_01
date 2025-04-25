/*
O codigo tem a funcao de calcular dois numeros floats e retornar um numero inteiro.
E incluido uma biblioteca <stdio.h> e uma estrutura padrao em C.
Sao declaradas tres variaveis do tipo float e uma do tipo int.
O codigo imprime uma mensagem para o usuario.
Apos armazenar os valores nas variaveis definidas, a variavel "multiplicacao"
recebe uma operacao aritmetica.
Ps- O "if" no scanf tem a funcao de garantir que apenas numeros serao digitados, 
enviando uma mensagem de erro caso isso nao ocorra.
Apos multiplicacao receber seu valor atribuido, uma estrutura condicional e criada.
Essa estrutura determina se o valor e postivo ou negativo.
Caso seja maior que 0 ira tornar uma conversao do tipo do resultado para inteiro, fazendo o arrendondamento correto.
Caso seja menor que 0 ira tornar uma conversao do tipo do resultado para inteiro, fazendo o arrendondamento correto.
Exemplo do Funcionamento
Se a conta for -9 * 2.5 o codigo ira retornar 23
Pois o valor da multiplicacao e -22.5, como se trata de um numero negativo ele
e arrendondado para cima. 
O valor 0.5 serve para confirmar isso, pois -22.5 - 0.5 = -23.0.
O mesmo se vale para outros numeros.
*/
#include <stdio.h>

int main(){
    float numero01, numero02, multiplicacao;
    int resultado;
    printf("Digite os dois valores a serem multiplicacao\n");
    if(scanf("%f %f", & numero01, &numero02) != 2){
        printf ("Voce nao digitou numeros, reinicie");
        return (0);
    }
    
    multiplicacao = (numero01) * (numero02);
    if( multiplicacao >= 0){
        resultado = (int) (multiplicacao + 0.5);
    }else{
        resultado = (int) (multiplicacao - 0.5);
    }
    printf("O valor da multiplicação em inteiros e %d\n", resultado);
    return (0);
} 