/*
 * Filename: stack.c
 * Author: Jinxiao Chen
 * Userid: <A14236655>
 * Login: cs12xii
 * Description: stack
 * Date: 6/8/2017
 * Source of Help: GreekforGreek
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "queue.h"

/*define the sturcture of stack*/
typedef struct Stack{
  Queue * q1;
  Queue * q2;
}Stack;


/*
 * Initializes a stack
 * Return:
 *   Normal: An empty stack
 *   When there is no memory available to allocate: null pointer
 */
Stack* stackInit() {


    Stack* s = (Stack *) malloc(sizeof(Stack));
    
    s->q1 = queue_init();
    s->q2 = queue_init();

    return s;
}

/*
 * push to a stack
 * Param:
 *   item - the stuff to be pushed
 */
void stackPush(Stack *stack, Node* element){



    
//    if(size(stack->q1) == 0){
//        enqueue(stack->q1,element);
//    }
//    else{
//        int size = size(stack->q1);
        int i;
        enqueue(stack->q2,element);
        for(i=0;i<size(stack->q1);i++){
            Node* ele =dequeue(stack->q1);
            enqueue(stack->q2,ele);
        }
    
    Queue* temp=stack->q1;
    stack->q1=stack->q2;
    stack->q2=temp;
    

}



/*
 * pop from a stack
 * Return:
 *   Return the popped element, or NULL otherwise.
 */

Node* stackPop(Stack *stack){



    return dequeue(stack->q1);

}



/*
 * Checks if the stack is empty
 */
int stackIsEmpty(Stack *stack) {
    return size(stack->q1);
}

/*
* Destory the stack
*/
void stackDestroy(Stack *stack) {
    free(stack->q1->array);
    free(stack->q2->array);
    free(stack->q1);
    free(stack->q2);
    free(stack);
}



