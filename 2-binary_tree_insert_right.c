#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - add a new node on a left branch
 * @parent: the parent of the new node
 * @value: the value held by the new node
 *
 * Return: a pointer to the new node, or NULL on a failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL, *temp = NULL;

	if (parent == NULL)
		return (0);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (0);
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	if (parent->right == NULL)
	{
		parent-> = newNode;
	}
	else
	{
		temp = parent->right;
		parent->right = newNode;
		newNode->right = temp;
		temp->parent = newNode;
	}
	return (newNode);
}



