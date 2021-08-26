/******************************************************************************

Faça um programa de caixa eletrônico utilizando ponteiro de funções.
Faça um algoritmo que simule o funcionamento de um caixa eletrônico, onde será 
apresentado uma lista de operações:
1-Saldo
2-Saque
3-Depósito
Ao iniciar o programa determine um valor inicial para a variável saldo (utilize 
um ponteiro para manter o valor do saldo), se o cliente escolher a opção 1 
mostre o valor do saldo, caso escolha o valor 2 leia o valor a ser sacado e 
verifique se existe saldo suficiente, se o saldo for maior ou igual , deduza da 
variável saldo o valor solicitado, caso não haja saldo suficiente mostre a 
mensagem “Saldo Insuficiente”, caso a opção 3 seja escolhida adicione o valor 
informado de deposito ao saldo. 
Implemente um laço faça enquanto que verifique se o usuário deseja continuar, 
caso a variável coletada for igual 1 reinicie o laço, mantendo o valor do saldo.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcao;
	float saldo, saque, deposito, saldoFinal;
	
	printf("Informe o valor do saldo em conta: R$ ");
    scanf("%f", &saldo);
        
    float *p = &saldo;
	
	
	do{
	    printf("Escolha a operação que deseja realizar:\n [1] Saldo\n [2] Saque\n [3] Depósito\n");
    	scanf("%i", &opcao);
    	
    	switch(opcao){
    		case 1:{
    			printf("O saldo é %2.2f \n", *p);
    			break;
    		}
    		case 2:{
    		    printf("Digite o valor que deseja realizar o saque: \n");
    		    scanf("%f", &saque);
    		    if(*p >= saque){
    		        *p = *p - saque;
    		        printf("Você sacou R$ %2.2f, seu saldo atualizado é R$ %2.2f\n", saque, *p);
    		    } else {
    		        printf("Saldo Insuficiente!\n");
    		    }
    			break;
    		}
    		case 3:{
    			printf("Digite o valor do depósito: \n");
    		    scanf("%f", &deposito);
    		    *p = *p + deposito;
    		    printf("Você depositou R$ %2.2f, seu saldo atualizado é R$ %2.2f\n", deposito, *p);
    			break;
    		}
    		default:{
    			printf("Opção inválida! Digite uma opção válida!\n");
    			break;
    		}
    	}
    	
    	printf("Deseja continuar? 1-Sim 0-Não\n");
    	scanf("%i", &opcao);
	} while (opcao == 1);
    return 0;
}