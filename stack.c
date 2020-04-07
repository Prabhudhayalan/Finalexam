#include  "stack.h”


//Implemented the Q1
struct Stack* new_stack()
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->elements = (char*)malloc(STACK SIZE * sizeof(char));
    return stack;
}
