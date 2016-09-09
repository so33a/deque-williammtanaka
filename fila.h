#ifndef FILA_H
#define FILA_H

typedef struct node * link;
struct node {
  int item;
  link next;
};

typedef struct {
  link maisEsquerda;
  link maisDireita;
} * FILA;

link novoNo(int item, link next);
FILA novaFila();
void inserirComeco(FILA f, int e);
int removerComeco(FILA f);
void inserirFinal(FILA f, int e);
int removerFinal(FILA f);
void imprimirFila(FILA f);
void destroiFila(FILA f);
int filaVazia(FILA f); 

#endif 
