#include <stdio.h>

int main(){
    int numero_01, numero_02, proximo;
    int contador_02;
    
    numero_01 = 0;
    numero_02 = 1;
    
    printf("Digite quantas sequenciais voce quer\n");
    scanf("%d", &contador_02);
    
    if(contador_02 >= 1){
        printf("%d ", numero_01);
    }
    if(contador_02 >= 2){
        printf("%d ", numero_02);
    }
    for(int contador = 3; contador <= contador_02; contador++){
        proximo = numero_01 + numero_02;
        printf("%d ", proximo);
        numero_01 = numero_02;
        numero_02 = proximo;
    }
    printf("\n");
return(0);    
}
