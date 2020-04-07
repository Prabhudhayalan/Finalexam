#include  "stack.h”


//Implemented the Q1
struct Stack* new_stack()
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->elements = (char*)malloc(STACK SIZE * sizeof(char));
    return stack;
}

//Implemented the Q2
char peek(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->elements[stack->top];
}

//Implemented the Q3
int sizeOfStack(struct Stack* stack)
{
	return stack->top;
}
