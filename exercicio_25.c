/*
Este algoritmo simula um sorteio de 6 números distintos dentro de um intervalo de 1 a 20
Inclui a biblioteca <stdio.h>, <stdlib.h> e <time.h>
Define duas constante inteira, uma para armazenar os valores desejados e outra para atribuir um valor maximo.
Declaração de 5 variaveis do tipo inteiro, sendo um vetor (array).
srand(time(NULL))inicializa um gerador de números aleatório.
Imprime uma mensagem informando quantos números da sorte serão exibidos.
O loop de for executa ele 6 vezes, sorteando um numero diferente em interacao.
Do While permite que o valor aleatorio seja sempre unico no algoritmo.
O número aleatório único gerado é armazenado na posição atual do array numero_sorteados.
numero sorteado e impresso na tela.
Imprime uma nova linha no final da saída.
*/

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