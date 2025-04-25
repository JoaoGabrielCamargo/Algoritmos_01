/*
Codigo que realiza a funcao de bhaskara, usando duas bibliotecas, sendo a padrao <stdio.h> e outra para incrementar
certas funcoes matematicas(potencia e raiz).
O codigo so possui variaveis do tipo float, sendo referidas aos nomes atribuidos a propria formula de bhaskara
A estrutura inicial retorna mensagens ao usuario, com intuito de conseguir informacoes para calcular a equacao.
Caso o usuario informe 0 como valor de A, o codigo imprimira uma mensagem de erro.
Caso delta de valores negativos, o codigo ira imprimir uma mensagem.
Caso o valor de delta seja postivo ira realizar o calculo de X1 e X2 e após isso irá imprimir uma
mensagem na tela informando os valores, com apenas duas casas decimais, apos a virgula.
*/
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float delta;
    float x1;
    float x2;
    
    printf("Digite o valor de A\n");
    scanf("%f", &a);
    printf("Digite o valor de B\n");
    scanf("%f", &b);
    printf("Digite o valor de C\n");
    scanf("%f", &c);
    
    if(a == 0){
        printf("Nao e uma equação do segundo grau, pois nao possui o coeficiente quadrático\n");
        return (0);
    }
    delta = b*b -4*(a)*(c);
    if(delta < 0){
        printf("A equação nao apresenta raizes reais\n");
    }
    if(delta >= 0){
        x1 = (-(b)+sqrt(delta))/(2*a);
        x2 = (-(b)-sqrt(delta))/(2*a);
        printf("As raizes da equacao sao\n x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
    return (0);
}