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
