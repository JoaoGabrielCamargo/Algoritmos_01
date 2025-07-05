#include <stdio.h>

int main(){
    float numero01, numero02, multiplicacao;
    int resultado;
    printf("Digite os dois valores a serem multiplicacao\n");
    if(scanf("%f %f", & numero01, &numero02) != 2){
        printf ("Voce nao digitou numeros, reinicie");
        return (0);
    }
    
    multiplicacao = (numero01) * (numero02);
    if( multiplicacao >= 0){
        resultado = (int) (multiplicacao + 0.5);
    }else{
        resultado = (int) (multiplicacao - 0.5);
    }
    printf("O valor da multiplicação em inteiros e %d\n", resultado);
    return (0);
} 
