#include <stdio.h>
#include <stdlib.h>

int main (){
    int num_01, num_02, resultado;
    
    printf("Digite um valor\n");
    scanf("%d", &num_01);
    printf("Digite um valor\n");
    scanf("%d", &num_02);
    
    if(num_02 == 0){
        printf("A conta não pode continuar\n");
        return (0);
    }
    if((num_02 > 0) || (num_02 < 0)){
        int divisao = num_01 / num_02;
        int resto = num_01 % num_02;
        int positivo_negativo = ((num_01 > 0) && (num_02 > 0) || (num_01 < 0) && (num_02 < 0)) ? 1 : -1;
        if(abs(resto) * 2 >= abs(num_02)){
            if(positivo_negativo < 0){
                resultado = divisao - 1;
            }
            if(positivo_negativo > 0){
                resultado = divisao + 1;
            }
        }else{
            resultado = divisao;
        }
        printf("O resultado e %d\n", resultado);
    }    
    return (0);
}
