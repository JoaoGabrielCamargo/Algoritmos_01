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
