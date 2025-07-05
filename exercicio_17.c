#include <stdio.h>

int main(){
    int num_01, num_02, num_03, num_04, num_05;
    int guardar;
    
    printf("Informe cinco numeros a sua escolha\n");
    if(scanf("%d %d %d %d %d", &num_01, &num_02, &num_03, &num_04, &num_05) !=5){
        printf("Você nao digitou numeros, por favor reinicie\n");
        return (0);
    }
    
    if(num_01 > num_02){
        guardar = num_01;
        num_01 = num_02;
        num_02 = guardar;
    }
    if(num_01 > num_03){
        guardar = num_01;
        num_01 = num_03;
        num_03 = guardar;
    }
    if(num_01 > num_04){
        guardar = num_01;
        num_01 = num_04;
        num_04 = guardar;
    }
    if(num_01 > num_05){
        guardar = num_01;
        num_01 = num_05;
        num_05 = guardar;
    }
    if(num_02 > num_03){
        guardar = num_02;
        num_02 = num_03;
        num_03 = guardar;
    }
    if(num_02 > num_04){
        guardar = num_02;
        num_02 = num_04;
        num_04 = guardar;
    }
    if(num_02 > num_05){
        guardar = num_02;
        num_02 = num_05;
        num_05 = guardar;
    }
    if(num_03 > num_04){
        guardar = num_03;
        num_03 = num_04;
        num_04 = guardar;
    }
    if(num_03 > num_05){
        guardar = num_03;
        num_03 = num_05;
        num_05 = guardar;
    }
    if(num_04 > num_05){
        guardar = num_04;
        num_04 = num_05;
        num_05 = guardar;
    }
    
    printf("Em ordem crescente\n %d %d %d %d %d\n", num_01, num_02, num_03, num_04, num_05);
    return (0);
}
