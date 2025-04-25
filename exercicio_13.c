/* 
O codigo tem a funcao de retornar a idade do usuario em meses, apesar de estar desconsiderando alguns valores.
O codigo possui uma biblioteca <stdio.h> e uma estrutura padrao em C.
E declarado quatro variaveis do tipo int.
Apos a declaracao das variaveis o codigo imprime uma duas mensagens na tela, pedindo as informacoes 
necessarias para o enunciado.
A variavel idade recebe uma atribuicao de valor aritmetico.
Entao a variavel meses realiza a conversao para meses.
O algoritmo entao retorna uma mensagem informando a idade do usuario em meses.
*/

#include <stdio.h>

int main(){
    int ano_nascimento, idade, ano_atual, meses;
    
    printf("Digite o ano atual\n");
    scanf("%d", &ano_atual);
    printf("Informe seu ano de nascimento\n");
    scanf("%d", &ano_nascimento);
    
    idade = ano_atual - ano_nascimento;
    meses = idade * 12;
    
    printf("Voce tem %d meses de idade, levando apenas a sua idade como cálculo", meses);
    return(0);
}