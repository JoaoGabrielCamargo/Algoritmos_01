#include <stdio.h>

int main(){
    float altura, profundidade, largura;

    printf("Digite os valores da altura,\nprofundidade e largura em metros\n");
    scanf("%f %f %f", &altura, &profundidade, &largura);
    printf("Os valores informados são\n%.2fm de altura\n%.2fm de profundidade\n%.2fm de largura\n", altura, profundidade, largura);
    return (0);
}
