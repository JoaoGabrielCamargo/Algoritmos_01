/* O codigo apresenta uma validacao de um triangulo, e logo apos informar o triangulo e equilatero,
isosceles ou escaleno.
Foram implementadas duas bibliotedas, sendo <stdio.h> e a <stdlib.h> (para usar "abs") 
O codigo possui tres variaveis do tipo float.
O codigo informa tres entradas de printf e tres leituras(scanf).
A condicao do primeiro if implementa a desigualdade triangular, ou seja, verifica se os valores informados
retornam um triangulo.
Estabelece que para três segmmentos formarem um triangulo, o comprimento de qualquer um dos lados
deve ser maior que o valor absoluto da diferença dos outros lados e menor que a soma
dos comprimentos dos outros dois lados.
Os outros tres ifs validam, caso os valores informados deem um triangulo, a classificação dos 
triangulos em Equilatero, Isosceles e Escaleno.
O else serve para confirmar que os valores nao representam um triangulo.
*/
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