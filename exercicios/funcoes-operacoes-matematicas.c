/******************************************************************************

1-crie um programa em linguagem C com 4 funções (somar, subatrair, multiplicar 
e dividir) recebendo os parâmetros do tipo float A e float B o retorno de cada 
função deve ser o valor da operação matemática

*******************************************************************************/

#include <stdio.h>

    float soma_result, subtracao_result, multiplic_result, divisao_result;
    
    float soma(float a, float b){
        
        return (a + b);
    };
    
    float subtracao(float a, float b){
        
        return (a - b);
    };
    
    float multiplicacao(float a, float b){
        
        return (a * b);
    };
    
    float divisao(float a, float b){
        
        return (a / b);
    };

   int main(){
     
     soma_result=soma(15.5, 5);
     subtracao_result=subtracao(15.5, 5);
     multiplic_result=multiplicacao(15.5, 5);
     divisao_result=divisao(15.5, 5);
     
     printf ("O resultado da soma é: %.2f\n", soma_result);
     printf ("O resultado da subtração é: %.2f\n", subtracao_result);
     printf ("O resultado da multiplicação é: %.2f\n", multiplic_result);
     printf ("O resultado da divisão é: %.2f\n", divisao_result);
     
     return(0);
 }
