#include <stdio.h>

int main(){
    int idade, ano_nascimento, ano_atual;
    char sexo, nacionalidade, deficiencia;
    
    printf("Digite  o ano atual\n");
    scanf("%d", &ano_atual);
    printf("Digite o seu ano de nascimento\n");
    scanf("%d", &ano_nascimento);
    
    idade = ano_atual - ano_nascimento;
    
    printf("Voce e Homem ou Mulher?\nH/M\n");
    scanf(" %c", &sexo);
    printf("Voce e brasileiro?\nS/N\n");
    scanf(" %c", &nacionalidade);
    printf("Possui alguma deficiencia?\nS/N\n");
    scanf(" %c", &deficiencia);
    
    if((idade >= 18) && (sexo == 'H')){
        if((nacionalidade != 'S') || (deficiencia != 'N')){
            printf("Voce nao pode se alistar\n");
        }else{
            printf("alistamento obrigatório\n");
        }
    }
    if(idade < 18){
        printf("Nao pode se alistar, idade abaixo do exigido\n");
        return (1);
    }
    if((sexo == 'M') && (idade >= 18)){
        if((nacionalidade != 'S') || (deficiencia != 'N')){
        printf("Voce nao pode se alistar\n");
        }else{
            printf("O alistamento nao e obrigatorio\n");
        }
    }
return (0);
}
