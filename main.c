#include <stdlib.h>
#include <stdio.h>
#include  "stack.h”
#define STACK_SIZE 10
// S t r u c t u r e d e f i n i n g a s t a c k
struct stack
{
char elements [ STACK SIZE ] ;
int top ;
} ;

int main ( )
{
struct stack * st = new_stack ();
push ( ’H ’, st );
push ( ’ e ’, st );
push ( ’ l ’, st );
push ( ’ l ’, st );
push ( ’ o ’, st );
print (st);
reverseprint (st);
}
