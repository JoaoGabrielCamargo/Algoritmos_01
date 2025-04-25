/*
O codigo informa todos os anos bissextos em um intervalo determinado pelo usuario.
E inlcuido uma biblioteca padrao da linguagem C, sendo q <stdio.h>.
Sao declaradas duas variaveis do tipo int.
Apos ocorre uma estrutura para determinar o intervalo de tempo pelo usuario e armazena-lo nas suas respectivas variaveis.
Em seguida ocorre a estrutura condicional para que o codigo execute caso o ano inicial informado pelo usuario seja menor que o ano final.
apos testar essa condicao, caso ela seja verdadeira realiza uma estrutura for que ira realizar a verificacao e continuar a sequencia 
informando os anos bissextos dentro do intervalo defenido pelo usuario.
*/
#include <stdio.h>

int main(){
    int ano, ano_final;
    printf("Digite o ano inicial\n");
    scanf("%d", &ano);
    printf("Digite o ano final\n");
    scanf("%d", &ano_final);
    
    if(ano < ano_final){
        for(;ano<=ano_final; ano++){
            if((ano % 4 == 0) && (ano % 100 != 0)){
                printf("%d\n", ano);
            }
            if((ano % 400 == 0)){
                printf("%d\n", ano);
            }
        }
    }
return(0);    
}
