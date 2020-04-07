#include <stdlib.h>
#include <stdio.h>

typedef struct

{
int elements[100];
int top;
stck;
} ;

struct Stack* new_stack();
char peek(struct Stack* stack);
int sizeOfStack(struct Stack* stack);
int isFull(struct Stack* stack);
void push(char c,struct Stack* stack)
char pop(struct Stack* stack);
void print(stack *s)
