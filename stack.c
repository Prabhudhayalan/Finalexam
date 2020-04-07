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

//Implemented the Q4
int isFull(struct Stack* stack)
{
    return stack->top == STACK_SIZE - 1;
}
void push(char c,struct Stack* stack)
{
    if (isFull(stack))
        return;
    stack->elements[++stack->top] = c;
}

//Implemented the Q5
char pop(struct Stack* stack)
{
    return stack->elements[stack->top--];
}
