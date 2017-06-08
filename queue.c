#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "queue.h"

/*
 * Initializes a queue
 * Return:
 *   Normal: An empty queue
 *   When there is no memory available to allocate: null pointer
 */
Queue * queue_init() {

    Queue * queue =(Queue *) {
    (Node **)malloc(QUEUE_SIZE * sizeof(Node)),
    REAR_INIT,
    FRONT_INIT

    };
    
    return queue;
}
/*
 * Enqueues to a queue
 * Param:
 *   item - the stuff to be enqueued
 */
void enqueue(Queue* queue, Node *node) {

	if(size(queue)==QUEUE_SIZE)
		printf("%s\n", QUEUE_OVERFLOW);
	else
	{
		if(isEmpty(queue)){
			queue->front = (queue->front+1);
		}
		queue->rear = (queue->rear + 1);
		queue->array[queue->rear] = node;
//	    printf("%d enqueued to queue\n", *node);
	}
}

/*
 * Dequeues from the queue
 */
Node * dequeue(Queue* queue) {
	if (isEmpty(queue)) {
		printf("%s\n", QUEUE_UNDERFLOW);
		return NULL;
	}


	Node *item = queue->array[queue->front];
	queue->front = (queue->front + 1);

	return item;
}

/*
 * Returns the element that will be dequeued next from the queue
 */
Node * peek(Queue* queue) {
	if (isEmpty(queue)) {
	printf("%s\n", QUEUE_UNDERFLOW);
	return NULL;
	}
	Node *item = queue->array[queue->front];
	return item;
}
/*
 * Destructs a queue
 */
void queue_delete(Queue* queue) {
	for(int i=queue->front;i<=queue->rear;i++){
		dequeue(&queue[i]);
	}
}
/*
 * Prints out the information of a queue
 */
void print(Queue* queue) {

	printf("%s\n", PRINT_DASH);
	if (isEmpty(queue)) {
		printf("%s\n",STR_PRINT_NO_ITEMS);
	}
	else {
		int i;
		int *temp;
		printf(STR_PRINT_ITEMS);
		for(int i=queue->front;i<=queue->rear;i++){
			*temp+=queue->array[i]->key_value;
			}
		printf("%d",*temp);
		printf("\n");
	}
	printf("%s\n", PRINT_DASH);
}
/*
 * Checks if the queue is empty
 */
int isEmpty(Queue* queue) {
    return sizeof(queue)/4 == 0;
}

/*
* Returns the number of elements in the queue
*/
int size(Queue* queue) {
    return sizeof(queue)/4;
}
