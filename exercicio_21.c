#include <stdio.h>

int main(){
    int num_01, num_02, resto;
    
    printf ("Informe dois numeros a serem divididos\n");
    if(scanf("%d %d", &num_01, &num_02) != 2){
        printf("Valores invalidos\n");
        return(0);
    }
    
    resto = (num_01) % (num_02);
    
    if(num_02 == 0){
        printf("Erro, divisao por zero\n");
        return(0);
    }
    if(resto == 0){
        printf("divisao exata\n");
        return(0);
    }
    if(resto % 2 != 0){
        printf("O resto da divisao e impar\n");
    }else{
        printf("O resto da divisao e par\n");
    }
return(0);   
}
