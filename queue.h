#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

#define QUEUE_SIZE 200
#define REAR_INIT -1
#define FRONT_INIT -1

#define QUEUE_OVERFLOW "Queue is full"
#define QUEUE_UNDERFLOW "Queue is Empty"
#define STR_PRINT_NO_ITEMS "There are no items to print"
#define STR_PRINT_ITEMS "Items in the queue are:"
#define PRINT_DASH "----------------------------------------"

#define STR_ERR_MEM "Memory is not available:("
#define STR_QUEUE_WELCOME "Lets test your queue!"
#define STR_PROMPT_OPTIONS "1.Enqueue 2.Deque 3.Peek 4.Print 5.isEmpty 6.Size 7.Exit"
#define ENQUEUE 1
#define STR_ENQUEUE_PROMPT "Enter key to enque"
#define STR_ENQUEUE_SUCCESS "Enqueue Successful"
#define DEQUEUE 2
#define STR_DEQUEUE_SUCCESS "Dequeue successful"
#define STR_DEQUEUE_FAILURE "Dequeue unsuccessful"
#define PEEK 3
#define PRINT 4
#define ISEMPTY 5
#define SIZE 6
#define EXIT 7

#define STR_PEEK_SUCCESS "Peek Worked"
#define STR_PEEK_FAILURE "Peek Failed"
#define STR_PRINT_NOT_EMPTY "Queue is not Empty"
#define SIZE_PROMPT "Size of queue is "
#define STR_ERR_UNKNOWN "Unknown option, Enter from 1 to 7"
#define STR_PROMPT "> "
#define STR_GOODBYE "Good Bye!!"
#define EXIT_SUCCESS 0
#define EMPTY_QUEUE "Queue is Empty!"
/*
 * Struct of the queue
 */
typedef struct {
	Node **array;
	int rear;
	int front;
} Queue;

/*
 * Initializes a queue
 * Return:
 *   Normal: An empty queue
 *   When there is no memory available to allocate: null pointer
 */
Queue * queue_init();

/*
 * Enqueues to a queue
 * Param:
 *   item - the stuff to be enqueued
 */
void enqueue(Queue* queue, Node * node);

/*
 * Dequeues from the queue
 */
Node * dequeue(Queue* queue);

/*
 * Returns the element that will be dequeued next from the queue
 */
Node * peek(Queue* queue);

/*
 * Destructs a queue
 */
void queue_delete(Queue* queue);

/*
 * Prints out the information of a queue
 */
void print(Queue* queue);

/*
 * Checks if the queue is empty
 */
int isEmpty(Queue* queue);

/*
* Returns the number of elements in the queue
*/
int size(Queue* queue);