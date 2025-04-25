/*
Codigo que recebe valores de entrada e os guardar nas variaveis.
Foi utilizado uma biblioteca padrao - <stdio.h> e estrutura padrao.
O codigo apresenta dois vetores de caracteres, sendo um com limite de 20 e outro com limite de 10.
Apresenta tambem uma variavel do tipo int e um do tipo float.
O codigo realiza uma series de impressoes afim de coletar os dados informados pelo usuario,
todos sao armazenados em suas respectivas variaveis.
Apos o preenchimento o algoritmo retorna uma mensagem de "Sucesso" para confirmar os dados salvos.
*/

#include <stdio.h>

int main(){
    char nome[25];
    char genero[10];
    int idade;
    float altura;
    
    printf("Digite seu nome\nUse _ para separar\n");
    scanf("%s", &nome);
    printf("Digite seu genero\n");
    scanf("%s", &genero);
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    printf("Digite sua altura em metros\n");
    scanf("%f", &altura);
    
    printf("Dados salvos com sucesso");
    return (0);
}