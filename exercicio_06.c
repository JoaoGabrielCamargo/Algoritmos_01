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
