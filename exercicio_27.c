#include <stdio.h>

int main(){
    float numero_01;
    int numero_02;
    
    printf("Digite um valor\n");
    scanf("%f", &numero_01);
    
    numero_02 = (int)numero_01;
    printf("O valor em inteiro e %d", numero_02);
    return(0);
}
