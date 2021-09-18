/******************************************************************************

 Implemente uma pilha de um TAD que represente as cartas de um baralho 
 Naipe+Carta exemplo: 9 de Ouros.
 Utilizando os métodos POP e PUSH  distribua as cartas de cima para baixo LIFO
 (Last In, First Out)

*******************************************************************************/

#include <stdio.h>

struct carta {
    char baralho[52];
    struct carta *proximo;
} typedef carta;

struct pilha {
    struct carta *primeiro;
} typedef pilha;

void push(pilha *p, char *n){
    printf("push %s \n", n);
    carta *novo = (carta*)malloc(sizeof(carta));
    strcpy(novo->baralho, n);
    novo->proximo = NULL;
    //pilha vazia
    if(p->primeiro==NULL){
        p->primeiro = novo;
    } else {
        novo->proximo = p->primeiro;
        p->primeiro = novo;
    }
}



void pop(pilha *p){
    printf("pop \n");
    if(p->primeiro==NULL){
        printf("Sem cartas \n");
    } else {
        carta *novoTopo = p->primeiro->proximo;
        free(p->primeiro);
        p->primeiro = novoTopo;
    }
}



void mostrar(pilha *p){
    printf("Topo da pilha=%s %x \n", p->primeiro->baralho, p->primeiro);
}



int main(int argc, char *argv[]) {
    pilha p;
    
    printf("Cartas:\n");
    push(&p, "2 de Copas");
    push(&p, "5 de Espada");
    push(&p, "3 de Ouro");
    push(&p, "7 de Espada");
    push(&p, "1 de Copas");
    push(&p, "A de Ouro");
    push(&p, "10 de Paus");
    push(&p, "6 de Paus");
    
    mostrar(&p);
    pop(&p);
    mostrar(&p);
    pop(&p);
    mostrar(&p);
    pop(&p);
    mostrar(&p);
    pop(&p);
    mostrar(&p);
    pop(&p);
    mostrar(&p);
    pop(&p);
    mostrar(&p);
    pop(&p);
    mostrar(&p);
    pop(&p);
    
    return 0;
}
