#include <stdio.h> 

int main(){
    float resistencia01, resistencia02, resistencia_equivalente;
    
    printf("Informe o valor da resistencia 1 \n");
    scanf("%f", &resistencia01);
    printf("Informe o valor da resistencia 2 \n");
    scanf("%f", &resistencia02);
    
    resistencia_equivalente = ((resistencia01) * (resistencia02)) / ((resistencia01) + (resistencia02));
    
    printf("O valor da resistencia equivalente em Ohms e %f\n", resistencia_equivalente);
    return(0);
}
