#include <stdio.h>
#include <stdlib.h>
#include "LIFO_Vetorial_lib.h"

int topo = 0;
int pilha[TAM_MAX_PILHA];

void Push(int ValorDigitado){

    pilha[topo] = ValorDigitado;
    ++topo;

}

int Pop(){

    --topo;
    return pilha[topo];

}

int Size(){

    return topo;

}

void List(){
    for(int i = topo-1; i >= PILHA_VAZIA; i--){
        printf("Pilha %d - Valor %d\n", i, pilha[i]);
    }
}

int Peek(){
    return pilha[topo-1];
}

void Clear(){
    topo = 0;
}
