/* 
O algoritmo tem a funcao de simular um alistamento.
O codigo inclui uma biblioteca <stdio.h> e uma estrutura padrao em C.
O codigo possui tres variaveis do tipo int e tres variaveis do tipo char.
O algoritmo imprime mensagens para coletar as informacoes necessarias 
e armazenar em suas devidas variaveis.
a variavel "idade" recebe um operacao aritmetica.
Apos isso o sistema enviar novas mensagens para coletar mais informações
e armazena-las em suas devidas variaveis.
Entao o operador condicional em conjunto com operadores booleanos
verifica se o usuario ira ter o alistamento obrigatório, caso for homem...
ou entao nao.
*/
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