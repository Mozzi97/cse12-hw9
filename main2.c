/*
 * Filename: main2.c
 * Author: Jinxiao Chen
 * Userid: <A14236655>
 * Login: cs12xii
 * Description: main2.c to test the stack.c
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
        stackPush(s,);
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

equeue(queue);
		 printf("%d ",temp->key_value);

		 if(temp->left != NULL)
			 enqueue(queue,temp->left);
		 if(temp->right != NULL)
			 enqueue(queue,temp->right);


	 }
	 printf("\n");
	 queue_delete(queue);
}



int main(int argc, char **argv)
{
    Stack* s = stackInit();
	
	searchKey(key,root);

	bfs(root);

	levelOrderTraversal(root);

	//free memory from the BST
	delete_tree(root);

	printf("%s\n",STR_GOODBYE);
	printf("%s\n", PRINT_DASH);
}
