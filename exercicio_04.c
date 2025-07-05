#include <stdio.h>

int main(){
    int ano, ano_final;
    printf("Digite o ano inicial\n");
    scanf("%d", &ano);
    printf("Digite o ano final\n");
    scanf("%d", &ano_final);
    
    if(ano < ano_final){
        for(;ano<=ano_final; ano++){
            if((ano % 4 == 0) && (ano % 100 != 0)){
                printf("%d\n", ano);
            }
            if((ano % 400 == 0)){
                printf("%d\n", ano);
            }
        }
    }
return(0);    
}
