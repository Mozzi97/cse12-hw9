#include <stdio.h>
#include "queue.h"

//will not compile until you provide a decleration for queue
int main(int argc, char * argv[]) {

	//will not compile till you provide a declaration for stack 
	Queue* queue = queue_init();

	if (queue == NULL) {
		fprintf(stderr, STR_ERR_MEM);
		return EXIT_FAILURE;
	}

	printf("%s\n",STR_QUEUE_WELCOME);
	printf("%s\n",PRINT_DASH);
	printf("%s\n",STR_PROMPT_OPTIONS);

	//to store strings from stdin
	int readin;
	Node* node;
	Node* removed;
	Node* peeked;
	int sizeQueue;
	
	int choice = -1;
	
	while (choice!=EXIT) {

		scanf("%d",&choice);
		if(choice==EXIT) {
			break;
		}
		
		switch(choice) {
			case ENQUEUE: 
					printf("%s\n",STR_ENQUEUE_PROMPT);
					scanf("%d",&readin);
					node = (Node*) malloc(sizeof(Node));
			        (node)->key_value = readin;
			        (node)->left = NULL;    
			        (node)->right = NULL;
					enqueue(queue,node);
					printf("%s : %d\n",STR_ENQUEUE_SUCCESS, readin);
					break;
					
			case DEQUEUE: 
					removed = dequeue(queue);
					if(removed!=NULL) {
						printf("%s : %d\n",STR_DEQUEUE_SUCCESS, removed->key_value);
					} else {
						printf("%s\n",STR_DEQUEUE_FAILURE);
					}
          free(removed);
					break;
					
			case PEEK: 
					peeked = peek(queue);
					if(peeked!=NULL) {
						printf("%s : %d\n",STR_PEEK_SUCCESS, peeked->key_value);
					} else {
						printf("%s\n",STR_PEEK_FAILURE);
					}
					break;
					
			case PRINT: 
					print(queue);
					break;
					
			case ISEMPTY:
					if(isEmpty(queue)) {
						printf("%s\n",EMPTY_QUEUE);
					} else {
						printf("%s\n",STR_PRINT_NOT_EMPTY);
					}
					break;

			case SIZE:
					sizeQueue = size(queue);
					printf(" %s : %d\n", SIZE_PROMPT, sizeQueue); 
					break;

					
			default: printf("%s\n",STR_ERR_UNKNOWN);
					
		}
		printf("%s\n",STR_PROMPT);
	}

	//destroy queue completely
	int i;
	for (i = queue->front; i < queue->rear; i++) {
        if ( i == -1) break;
		free(queue->array[i]);
	}
	queue_delete(queue);
	printf("%s\n",STR_GOODBYE);
	return EXIT_SUCCESS;
}
