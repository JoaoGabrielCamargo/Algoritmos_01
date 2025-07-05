#include <stdio.h>

int main(){
    char escrever [31];
    
    printf("Digite o seu nome \n",escrever);
    scanf("%30s", &escrever);
    
    printf("O usuario digitou %s\n", escrever);
    return (0);
    
}
