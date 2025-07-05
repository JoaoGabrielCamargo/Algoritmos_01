#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int quantidade_de_numeros_sorteados = 6;
    const int quantidade_maxima = 20;
    int numero_sorteados[quantidade_de_numeros_sorteados], repete;
    int contador, contador2, numero_aleatorio;
    
    srand(time(NULL));
    
    printf("Os %d numeros da sorte sao \n", quantidade_de_numeros_sorteados);
    
    for(contador = 0; contador < quantidade_de_numeros_sorteados; contador++){
        do{
            numero_aleatorio = (rand() % quantidade_maxima) + 1;
            repete = 0;
            for(contador2 = 0; contador2 < contador; contador2++){
                if(numero_sorteados[contador2] == numero_aleatorio){
                        repete = 1;
                        break;
                }
            }
        }while(repete); 
        numero_sorteados[contador] = numero_aleatorio;
        printf("%d ", numero_sorteados[contador]);
    }
    printf("\n");
    return(0);
}
