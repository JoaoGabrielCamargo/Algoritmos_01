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
