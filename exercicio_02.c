#include <stdio.h>

int main(){

    float altura;
    float mediamasculina;
    float mediafeminina;
    char genero;
    
    printf("Digite seu genero\n h ou m\n");
    scanf("%c", &genero);
    
    mediamasculina = 1.73;
    mediafeminina = 1.60;
    
    if((genero != 'h')){
        if((genero != 'm')){
            printf("Erro no sistema");
            return (0);
        }
    }
    printf("Digite sua altura em metros\n");
    scanf("%f", &altura);
    if(altura <= 0){
        printf("O valor informado nao pode ser processado");
        return (0);
    }
    if(altura > 0){
        if((altura == mediamasculina) && (genero == 'h')){
            printf("Voce esta na media nacional masculina");
        }
        if((altura < mediamasculina) && (genero == 'h')){
            printf("Voce esta abaixo da media nacional masculina");
        }
        if((altura > mediamasculina) && (genero == 'h')){
            printf("Voce esta acima da media nacional masculina");
        }
        if((altura == mediafeminina) && (genero == 'm')){
            printf("Voce esta na media nacional feminina");
        }
        if((altura > mediafeminina) && (genero == 'm')){
            printf("Voce esta acima da media nacional feminina");
        }
        if((altura < mediafeminina) && (genero == 'm')){
            printf("Voce esta abaixo da media nacional feminina");
        }
    }
return (0);   
}
