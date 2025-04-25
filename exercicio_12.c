/* 
O codigo utiliza um vetor para retornar o nome do usuario digitado, lembrando de usar separador.
O codigo possui uma biblioteca - <stdio.h> e estrutura padrao em C.
O codigo apresenta apenas um vetor do tipo char, com maximo de 30 caracteres + 1 para a caracter nula
\n ou \0.
O Codigo inicia uma mensagem, pedindo para o usuario digitar seu nome. O valor e armazenado em sua variavel
atribuida.
Apos isso o codigo retorna o valor armazenado para o usuario.
*/

#include <stdio.h>

int main(){
    char escrever [31];
    
    printf("Digite o seu nome \n",escrever);
    scanf("%30s", &escrever);
    
    printf("O usuario digitou %s\n", escrever);
    return (0);
    
}