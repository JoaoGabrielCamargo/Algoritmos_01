#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado_a, lado_b, lado_c;

    printf("Digite o valor do primeiro lado ");
    scanf("%f", &lado_a);
    printf("Digite o valor do segundo lado ");
    scanf("%f", &lado_b);
    printf("Digite o valor do terceiro lado ");
    scanf("%f", &lado_c);

    if((((lado_a > abs(lado_b - lado_c)) && (lado_a < lado_b + lado_c)) && ((lado_b > abs(lado_a - lado_c)) && (lado_b < lado_a + lado_c))) && (((lado_c > abs(lado_a - lado_b)) && (lado_c < lado_a + lado_b)))){
        printf("E um triangulo\n");{
            if((lado_a == lado_b) && (lado_b == lado_c)){
                printf("O triangulo e equilatero\n");
            }
            if((lado_a == lado_b) && (lado_a != lado_c) || (lado_a == lado_c) && (lado_a != lado_b) || (lado_b == lado_c) && (lado_b != lado_a)){
                printf("O triangulo e isosceles\n");
            }
            if((lado_a != lado_b) && (lado_a != lado_c) && (lado_b != lado_c)){
                printf("O triangulo e escaleno\n");
            }
        }
    }else{
        printf("Nao e um triangulo\n");
    }
return (0);
}
