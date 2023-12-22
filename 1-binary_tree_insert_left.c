#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - node on a left branch
 * @parent: parent of the new node
 * @value: value held by the new node
 *
 * Return: pointer to the new node, or NULL on a failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
	{
		parent->left = newNode;
	}
	else
	{
		temp = parent->left;
		parent->left = newNode;
		newNode->left = temp;
		temp->parent = newNode;
	}
	return (newNode);
}








