#include <stdio.h>

int main(){
    int num_01, num_02, num_03, num_04;
    int resultado;
    int resultado2;
    float divisao;
    
    printf("Digite dois valores de entrada\n");
    if(scanf("%d %d", &num_01, &num_02) != 2){
        printf("Erro no sistema, digite apenas numeros\n");
        return (0);
    }
    resultado = num_01 + num_02;
    
    printf("Digite mais dois valores\n");
    if(scanf("%d %d", &num_03, &num_04) != 2){
        printf("Erro no sistema, digite apenas nuemros\n");
        return (0);
    }
    resultado2 = num_03 + num_04;
    if(resultado2 == 0){
        printf("Erro, o divisor e 0");
        return (0);
    }
    divisao = (float)resultado / resultado2;
    
    printf("O resultado da divisao dos valores de entrada é\n%.2f", divisao);
    return (0);
}
