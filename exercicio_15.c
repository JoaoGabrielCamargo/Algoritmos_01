#include <stdio.h>

int main(){
    int numero01, numero02, numero03;
    float media;
    
    printf("Digite a primeira nota\n");
    scanf("%d", &numero01);
    printf("Digite a segunda nota\n");
    scanf("%d", &numero02);
    printf("Digite a terceira nota\n");
    scanf("%d", &numero03);
    
    media = (float)((numero01) + (numero02) + (numero03)) / 3;
    
    printf("A media das notas e %.2f\n", media);
    return(0);
}
