#include <stdio.h>
int main(){
	
	int numero;
	char enter, validacao, reiniciar;
	float calculo;
	
	calculo = 0.00;
	
	printf("Bem vindo ao restaurante Prato Bom\n");
	printf("Pressione c para continuar\n");
	scanf(" %c", &enter);
	
	if(enter == 'c'){
		printf("Gostaria de conferir nossos pratos? s ou n\n");
		scanf(" %c", &validacao);
		
		if(validacao == 's'){
			printf("1.Prato Feito\n");
			printf("2.Bife Cavalo\n");
			printf("3.Virada Paulista\n");
			printf("4.Coca-Cola 2L\n");
			printf("5.Fanta 2L\n");
			
			printf("Digite o numero do prato que voce deseja\n");
			if(scanf("%d", &numero) != 1){
				printf("Voce nao digitou o numero do prato\n");
				return (0);
			}
			if((numero < 1) || (numero >5)){
				printf("Voce digitou um numero invalido, por favor tente novamente\n");
				return(0);
			}
			if(numero == 1){
				printf("Prato Feito\nR$ 25,00\n");
				printf("Gostaria de pedir mais alguma coisa?\ns ou n\n");
				scanf(" %c", &reiniciar);
				calculo = calculo + 25.00;
			}
			if(numero == 2){
				printf("Bife Cavalo\nR$ 30,00\n");
				printf("Gostaria de pedir mais alguma coisa?\ns ou n\n");
				scanf(" %c", &reiniciar);
				calculo = calculo + 30.00;
			}
			if(numero == 3){
				printf("Virada Paulista\nR$ 30,00\n");
				printf("Gostaria de pedir mais alguma coisa?\ns ou n\n");
				scanf(" %c", &reiniciar);
				calculo = calculo + 30.00;
			}
			if(numero == 4){
				printf("Coca-Cola\n R$ 10,00\n");
				printf("Gostaria de pedir mais alguma coisa?\ns ou n\n");
				scanf(" %c", &reiniciar);
				calculo = calculo + 10.00;
			}
			if(numero == 5){
				printf("Fanta\n R$ 7,50\n");
				printf("Gostaria de pedir mais alguma coisa?\ns ou n\n");
				scanf(" %c", &reiniciar);
				calculo = calculo + 7.50;
			}
            if(reiniciar != 's'){
					printf("Aguarde em quanto processamos o valor do seu pedido...\n");
					printf("O valor total do seu pedido e R$%.2f\n", calculo);
					return(0);
			}
			while(reiniciar == 's'){
				printf("Digite o numero do prato que voce deseja\n");
				if(scanf("%d", &numero) != 1){
					printf("Voce nao digitou o numero do prato\n");
					return (0);
				}
				if((numero < 1) || (numero > 5)){
					printf("Voce digitou um numero invalido, por favor tente novamente\n");
					continue; 
				}
				if(numero == 1){
				printf("Prato Feito\nR$ 25,00\n");
				printf("Gostaria de pedir mais alguma coisa?\ns ou n\n");
				scanf(" %c", &reiniciar);
				calculo = calculo + 25.00;
				}
				if(numero == 2){
				printf("Bife Cavalo\nR$ 30,00\n");
				printf("Gostaria de pedir mais alguma coisa?\ns ou n\n");
				scanf(" %c", &reiniciar);
				calculo = calculo + 30.00;
				}
				if(numero == 3){
				printf("Virada Paulista\nR$ 30,00\n");
				printf("Gostaria de pedir mais alguma coisa?\ns ou n\n");
				scanf(" %c", &reiniciar);
				calculo = calculo + 30.00;
				}
				if(numero == 4){
				printf("Coca-Cola\n R$ 10,00\n");
				printf("Gostaria de pedir mais alguma coisa?\ns ou n\n");
				scanf(" %c", &reiniciar);
				calculo = calculo + 10.00;
				}
				if(numero == 5){
				printf("Fanta\n R$ 7,50\n");
				printf("Gostaria de pedir mais alguma coisa?\ns ou n\n");
				scanf(" %c", &reiniciar);
				calculo = calculo + 7.50;
				}
				if(reiniciar != 's'){
					printf("Aguarde em quanto processamos o valor do seu pedido...\n");
					printf("O valor total do seu pedido e R$%.2f\n", calculo);
					return(0);
				}
			}
		return  (0);
		}
		if(validacao == 'n'){
			printf("Obrigado pela visita, volte sempre");
			return (0);
		}
		if((validacao != 'n') || (validacao != 's')){
			printf("parece que houve um erro");
			return (0);
		}
	}else{
		printf("Erro no sistema");
		return (0);
	}
}
    
