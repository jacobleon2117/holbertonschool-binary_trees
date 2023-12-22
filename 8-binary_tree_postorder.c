#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - perform postorder traversal on a tree
 * @tree: the tree being traversed
 * @func: the function being used on each element
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
