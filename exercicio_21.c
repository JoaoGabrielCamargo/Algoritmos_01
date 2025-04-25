/* 
O codigo realiza uma divisao entre numeros inteiros e informa se o resto da divisao e impar
E utilizao uma biblioteca do tipo <stdio.h> e uma estrutura padrao em C.
Sao declaradas tres variaveis do tipo int.
O algoritmo envia uma mensagem ao usuario para informar os valores.
Os valoressao aarmazenados em suas devidas variaveis.
O "if" no scanf tem a funcao de impedir letras, caso isso ocorra ele retorna
um erro.
a variavel "resto" recebe a operacao por modulo "%".
Em seguida um condicional verfica se o denominador (num_02) e igual a zero, se for retorna um erro.
Apos, uma nova condicao e criada, e caso o resto seja diferente de 0 ele retorna impar, se nao
retorna par.
*/
#include <stdio.h>

int main(){
    int num_01, num_02, resto;
    
    printf ("Informe dois numeros a serem divididos\n");
    if(scanf("%d %d", &num_01, &num_02) != 2){
        printf("Valores invalidos\n");
        return(0);
    }
    
    resto = (num_01) % (num_02);
    
    if(num_02 == 0){
        printf("Erro, divisao por zero\n");
        return(0);
    }
    if(resto == 0){
        printf("divisao exata\n");
        return(0);
    }
    if(resto % 2 != 0){
        printf("O resto da divisao e impar\n");
    }else{
        printf("O resto da divisao e par\n");
    }
return(0);   
}