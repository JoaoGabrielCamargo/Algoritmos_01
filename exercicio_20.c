#include <stdio.h>

int main(){
     char letra01, letra02, letra03, guardar;
     
     printf("Digite três caracteres\n");
     scanf(" %c %c %c", &letra01, &letra02, &letra03);
     
     if(letra01 > letra02){
         guardar = letra01;
         letra01 = letra02;
         letra02 = guardar;
     }
     if(letra01 > letra03){
         guardar = letra01;
         letra01 = letra03;
         letra03 = guardar;
     }
     if(letra02 > letra03){
         guardar = letra02;
         letra02 = letra03;
         letra03 = guardar;
     }
     printf("Os caracteres em ordem alfabetica ficam\n %c %c %c\n", letra01, letra02, letra03);
     return (0);
}
