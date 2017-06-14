/*
 * Filename: tree.c
 * Author: Jinxiao Chen
 * Userid: <A14236655>
 * Login: cs12xii
 * Description: binary search tree
 * Date: 6/8/2017
 * Source of Help: None
 */

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


/*
 * Inserts the key into the BST with the given root
 */
void insert(int key, Node **root)
{
	  if(search(key,*root)){
		  return;
	  }
	  if(*root == NULL){
		  Node *newnode = (Node *)malloc(sizeof(Node));
		  newnode->key_value = key;
		  newnode->left = NULL;
		  newnode->right = NULL;
		  *root = newnode;
	  }
	  else{
		  if(key<(*root)->key_value){
			  return insert(key, &((*root)->left));
		  }
		  else{
			  return insert(key, &((*root)->right));
		  }

	  }
}


/*
 * Checks if the key is present in the BST with the given root
 * Return-
 * 1 - if key is found
 * 0 - if key is not found
 */
int search(int key, Node *root)
{
	if(root!=NULL)
	  {
	    if(key==root->key_value)
	      return 1;
	    else if(key<root->key_value)
	      return search(key, root->left);
	    else
	      return search(key, root->right);
	  }
	  else{
		  return 0;
	  }
}

/*
 * Deletes the tree root at the given root
 */
void delete_tree(Node *root)
{
	if(root!=NULL)
	    {
	        delete_tree(root->left);
	        delete_tree(root->right);

	        free(root);
	    }
}
