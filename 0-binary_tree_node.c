#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - makes a binary tree node
 * @parent: pointer to parent node of new node
 * @value: value associated with new node
 * Return: pointer to new node, or NULL
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL;)
	}
	
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;

	return (newNode);
}
