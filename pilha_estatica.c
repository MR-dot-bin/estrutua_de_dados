#include <stdio.h>
#include <stdlib.h>

typedef struct pilhadao
{
    int capacidade;
    int posicao;
    float *pPilha;
} PILHA;

void criarpilha (PILHA *mystack, int capacidad)
{
    mystack->posicao = -1;
    mystack->capacidade = capacidad;
    mystack->pPilha = (float *) malloc (capacidad * sizeof (float));
}

void empilha (PILHA *mystack, float valor)
{
    mystack->posicao++;
    mystack->pPilha[mystack->posicao] = valor;
}

float desempilha (PILHA *mystack)
{
    float aux = mystack->pPilha[mystack->posicao];
    mystack->posicao--;
    
    return aux;
}

int main ()
{
    PILHA mystack;
    int capacidade;
    
    criarpilha (&mystack, 5);
    empilha (&mystack, 1); 
    empilha (&mystack, 2); 
    
    printf ("%f\n", desempilha (&mystack));
    printf ("%f\n", desempilha (&mystack));

    
}
