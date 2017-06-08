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
 * Reads the number of keys and the keys from the user. Inserts them into the BST with the given root one by one.
 */
void readTree(Node **root)
{
	//TODO Declarations
	printf("%s\n",NUM_VALS);
	//TODO
	printf("%s\n",READ_VALS);
	//TODO
	printf("%s\n", TREE_CREATED);
}

/*
 * Reads the key to be searched from the user and returns it.
 */
int readSearchKey()
{
	//TODO Declarations
	printf("%s\n", PRINT_SEARCH_ELEMENT);
	//TODO
}

/*
 * Searches for the key in the BST with the specified root 
 * and prints if it was found or not.
 */
void searchKey(int key, Node *root)
{
	//TODO
	if(/*TODO*/)
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
	//TODO
}

/*
 * Performs level order traversal for the BST with the given root (left to right)
 * and prints the results line by line for each level
 */
void levelOrderTraversal(Node *root)
{
	printf("%s\n", PRINT_LEVEL);
    //TODO	
}

int main(int argc, char **argv)
{
	Node *root = NULL;
	readTree(/*TODO*/);
	int key = readSearchKey();
	printf("%s\n", PRINT_DASH);
	searchKey(/*TODO*/);
	printf("%s\n", PRINT_DASH);
	bfs(/*TODO*/);
	printf("%s\n", PRINT_DASH);
	levelOrderTraversal(/*TODO*/);
	printf("%s\n", PRINT_DASH);
	//TODO - free memory from the BST
	printf("%s\n", DELETE_TREE);
	printf("%s\n",STR_GOODBYE);
	printf("%s\n", PRINT_DASH);
}
