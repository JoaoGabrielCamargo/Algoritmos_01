/* 
O algoritmo tem a funcao de responder o usuario com a letra "E" caso o usuario digite 
a palavra "O".
O codigo apresenta uma biblioteca <stdio.h> e uma estrutura padrao em C.
Sao declaradas duas variaveis do tipo char.
Um printf vazio e marcado e logo em seguida um scanf que fara a leitura
da tecla digitada pelo usuario.
A estrutura condicional ira validar se o valor informado pelo usuario e a letra
"O" e outra para validar o "o", caso seja maisculo o algoritmo ira retornar um "E",
caso seja um minusculo, o algoritmo ira retornar um "e". 
*/

#include <stdio.h>

int main (){
    char o;
    char e;
    
    printf("");
    scanf(" %c", &o);
    
    if(o == 'o'){
        printf("e");
    }
    if(o == 'O'){
        printf("E");
    }else{
        return (0);
    }
return (0);    
}