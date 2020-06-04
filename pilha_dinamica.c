#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int content;
    struct no *next_node;
} NODE;

NODE *top = NULL;


void insert_node (int valor)
{
    NODE *new_node = (NODE *) malloc (sizeof (NODE));
    new_node->content = valor;
    new_node->next_node = top;
    top = new_node;
}

void remove_node ()
{
    printf ("%d\n", top->content);
    top = top->next_node;
}

int main ()
{
    insert_node (1);
    insert_node (2); 
    
    remove_node ();
    remove_node ();
}
