#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traversal on a tree
 * @tree: tree being traversed
 * @func: function being used on each element
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
