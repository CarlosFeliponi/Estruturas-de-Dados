#ifndef LIFO_VETORIAL_LIB_H_INCLUDED
#define LIFO_VETORIAL_LIB_H_INCLUDED

#define TAM_MAX_PILHA 10
#define PILHA_VAZIA 0

extern int topo;
extern int pilha[TAM_MAX_PILHA];


void Push(int ValorDigitado);

int Pop();

int Size();

void List();

int Peek();

void Clear();

#endif
