#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - perform inorder traversal on a tree
 * @tree: the tree being traversed
 * @func: the function being used on each element
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
