/******************************************************************************

 2. Escrever uma função recursiva que retorna o tamanho de um string, 
 tamstring(char s[])

*******************************************************************************/

#include <stdio.h>

int tamString(char s[]){
    int tam = 0;
    
    while(s[tam] != '\0'){
        tam++;
    }
    return tam;
};

int main()
{
    char vet[30] = ("juliana");
    
    printf("O tamanho da palavra é: %d", tamString(vet));

    return 0;
}


