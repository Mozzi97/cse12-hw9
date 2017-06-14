/*
 * Filename: queue.c
 * Author: Jinxiao Chen
 * Userid: <A14236655>
 * Login: cs12xii
 * Description: queue
 * Date: 6/8/2017
 * Source of Help: None
 */

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

    Queue * queue =(Queue *) malloc(sizeof(Queue));
    queue->array = (Node **) malloc(QUEUE_SIZE * sizeof(Node *));
    queue->rear = REAR_INIT;
    queue->front = FRONT_INIT;

    

    return queue;
}
/*
 * Enqueues to a queue
 * Param:
 *   item - the stuff to be enqueued
 */
void enqueue(Queue* queue, Node *node) {


	if(size(queue)==QUEUE_SIZE)
    //if queue is full
		printf("%s\n", QUEUE_OVERFLOW);
	else
	{

		queue->rear = (queue->rear + 1);
		queue->array[queue->rear] = node;
	}
}

/*
 * Dequeues from the queue
 */
Node * dequeue(Queue* queue) {
	if (isEmpty(queue)) {
    //if queue is empty
		printf("%s\n", QUEUE_UNDERFLOW);
		return NULL;
	}
	queue->front = (queue->front + 1);
	Node *item = queue->array[queue->front];
	return item;
}

/*
 * Returns the element that will be dequeued next from the queue
 */
Node * peek(Queue* queue) {
	if (isEmpty(queue)) {
    //if queue is empty
	printf("%s\n", QUEUE_UNDERFLOW);
	return NULL;
	}
	queue->front = (queue->front + 1);
	Node *item = queue->array[queue->front];
	queue->front = (queue->front - 1);
	return item;
}
/*
 * Destructs a queue
 */
void queue_delete(Queue* queue) {
	free(queue->array);
	free(queue);
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
		printf("%s ",STR_PRINT_ITEMS);
			for(i=queue->front+1;i<=queue->rear;i++){
				printf("%d ",queue->array[i]->key_value);
			}
		printf("\n");
	}
	printf("%s\n", PRINT_DASH);
}
/*
 * Checks if the queue is empty
 */
int isEmpty(Queue* queue) {
    return size(queue) == 0;
}

/*
* Returns the number of elements in the queue
*/
int size(Queue* queue) {
    return queue->rear - queue->front;
}
