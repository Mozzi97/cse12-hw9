#include <stdio.h>
#include <stdlib.h>
/*
 * Struct of Node
 */
typedef struct Node
{
	int key_value;
  	struct Node *left;
  	struct Node *right;

}Node;

/*
 * Inserts the key into the BST with the given root
 */
void insert(int key, Node **root);

/*
 * Checks if the key is present in the BST with the given root
 * Return-
 * 1 - if key is found
 * 0 - if key is not found
 */

int search(int key, Node *root);

/*
 * Deletes the tree root at the given root
 */

void delete_tree(Node *root);
