/*
 * Filename: main.c
 * Author: Jinxiao Chen
 * Userid: <A14236655>
 * Login: cs12xii
 * Description: Breadth-First-Search, Level Order Traversal and Key Search
 * Date: 6/8/2017
 * Source of Help: None
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


#define READ_VALS "Enter the values to be inserted into the tree:"
#define NUM_VALS "Enter the number of nodes:"
#define PRINT_BFS "BFS for the tree is:"
#define TREE_CREATED "Tree has been successfully created!"
#define PRINT_LEVEL "Level order traversal for the tree is:"
#define PRINT_SEARCH_ELEMENT "Enter key to be searched:"
#define KEY_FOUND "Key found!"
#define KEY_NOT_FOUND "Key not found!"
#define DELETE_TREE "Tree Destroyed!"


/*
 * Reads the number of keys and the keys from the user. Inserts them into the
 * BST with the given root one by one.
 */
void readTree(Node **root)
{
	//Declarations
	int num = 0;
	printf("%s\n",NUM_VALS);
	scanf("%d",&num);

	int numarr[num];
	int i;
	printf("%s\n",READ_VALS);
	for(i=0;i<num;i++){
		scanf("%d",&numarr[i]);
		insert(numarr[i],root);
	}
	printf("%s\n", TREE_CREATED);
}

/*
 * Reads the key to be searched from the user and returns it.
 */
int readSearchKey()
{
	//Declarations
	int key = 0;
	printf("%s\n", PRINT_SEARCH_ELEMENT);
	scanf("%d", &key);
	return key;
}

/*
 * Searches for the key in the BST with the specified root 
 * and prints if it was found or not.
 */
void searchKey(int key, Node *root)
{
	if(search(key,root))
		printf("%s\n", KEY_FOUND);
	else
		printf("%s\n", KEY_NOT_FOUND);
}

/*
 * Performs Breadth First Search on the BST (from left to right) with the given root
 * Print the results in a single line separated by single space.
 */
void bfs(Node *root)
{
	printf("%s\n", PRINT_BFS);
	if(root == NULL){
		printf("\n");
		return;
	}
	Queue* queue = queue_init();
	Node *temp;
	enqueue(queue,root);

	 while (!isEmpty(queue)){
//		 Node *temp = (Node *) malloc(sizeof(Node));
		 temp = dequeue(queue);
		 printf("%d ",temp->key_value);

		 if(temp->left != NULL)
			 enqueue(queue,temp->left);
		 if(temp->right != NULL)
			 enqueue(queue,temp->right);


	 }
	 printf("\n");
	 queue_delete(queue);
}

/*
 * Performs level order traversal for the BST with the given root (left to right)
 * and prints the results line by line for each level
 */
void levelOrderTraversal(Node *root)
{
	printf("%s\n", PRINT_LEVEL);
	if(root == NULL){
		printf("\n");
		return;
	}
	Queue* queue = queue_init();
	Node *temp;
	enqueue(queue,root);

	int count = 1;

	 while (!isEmpty(queue)){
//		 Node *temp = (Node *) malloc(sizeof(Node));
		 temp = dequeue(queue);
		 printf("%d ",temp->key_value);
		 count--;

		 if(temp->left != NULL)
			 enqueue(queue,temp->left);

		 if(temp->right != NULL)
			 enqueue(queue,temp->right);

		 if(count == 0){
			 printf("\n");
			 count=size(queue);
		 }

	 }
	 printf("\n");
	 queue_delete(queue);


}



int main(int argc, char **argv)
{
	Node *root = NULL;
	readTree(&root);
	int key = readSearchKey();
	printf("%s\n", PRINT_DASH);
	searchKey(key,root);
	printf("%s\n", PRINT_DASH);
	bfs(root);
	printf("%s\n", PRINT_DASH);
	levelOrderTraversal(root);
	printf("%s\n", PRINT_DASH);
	//free memory from the BST
	delete_tree(root);
	printf("%s\n", DELETE_TREE);
	printf("%s\n",STR_GOODBYE);
	printf("%s\n", PRINT_DASH);
}
