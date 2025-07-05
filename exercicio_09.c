#include<stdio.h>

int main(){
    int numero;
    
    printf("Digite um numero\n");
    scanf("%d", &numero);
    if(numero % 2 == 0){
        printf("O nunero e par");
    }else{
        printf("O numero e impar");
    }
    return (0);
}
