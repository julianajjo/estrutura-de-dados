/******************************************************************************

3-Crie um TAD que implemente o controle de uma conta bancaria, implemente funções
para inicializar, depositar, sacar e imprimir o saldo.

*******************************************************************************/
#include <stdio.h>

struct {
    int numeroConta;
    double saldo;
} typedef contaBancaria; 

void inicializa(contaBancaria *conta, int numeroConta, double saldo) {
    conta->numeroConta = numeroConta;
    conta->saldo = saldo;
} 

void deposito(contaBancaria *conta, double valor){
    (*conta).saldo += valor;
} 

void saque(contaBancaria *conta, double valor){
    (*conta).saldo -= valor;
}

void imprime(contaBancaria conta){
    printf("Número da conta: %d \n", conta.numeroConta);
    printf("Saldo da conta: %.2f \n", conta.saldo);
}


int main(int argc, char *argv[])
{
    contaBancaria contaTeste;
    inicializa(&contaTeste,41523,300.00);
    printf("\nConta antes da movimentação: \n");
    imprime(contaTeste);
    deposito(&contaTeste, 50.00);
    saque(&contaTeste, 70.00);
    printf("\nConta depois da movimentação: \n");
    imprime(contaTeste);
    getch();
}
