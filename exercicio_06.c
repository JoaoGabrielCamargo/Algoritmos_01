/*
Codigo que realiza uma soma simples entre dois numeros, informados pelo usuario.
Codigo possui apenas uma biblioteca - <stdio.h>.
Apos a estruturacao padrao, sao declarados tres variaveis do tipo inteiro (int).
O codigo imprime duas mensagens e armazenam as respostas(numeros informados pelo usuario) 
e os armazenam em suas respectivas variaveis.
E declarado um processo aritmetico para a variavel soma.
O programa retorna uma mensagem informado o resultado da aritmetica soma.
*/
#include <stdio.h>

int main(){
    int a;
    int b;
    int soma;
    
    printf("Digite o valor de A\n");
    scanf("%d", &a);
    printf("Digite o valor de B\n");
    scanf("%d", &b);
    
    soma = a + b;
    
    printf("O resultado de A + B e\n%d", soma);
    return (0);
}