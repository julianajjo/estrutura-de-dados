/******************************************************************************

3. Fazer uma função recursiva que conta o número de ocorrências de um determinado 
caracter, caract(char c, char s[])

*******************************************************************************/

#include <stdio.h>

int carac(char c, char s[]){
    if(s[0] == '\0')
    return 0;
    if(s[0]==c){
        return (1+carac(c,++s));
    }
    return carac(c,++s);
}


int main()
{
    char s[30],c;
    int t;
    printf("Contagem de ocorrências de um caracter\n");
    printf("\nDigite a string: ");
    gets(s);
    printf("\nDigite o caractere que deseja contar: ");
    c=getchar();
    t=carac(c,s);
    printf("\n\nEncontrei %d vezes", t);
    getch();


    return 0;
}


