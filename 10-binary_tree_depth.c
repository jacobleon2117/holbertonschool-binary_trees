#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - determines the depth of a binary tree
 * @tree: the tree being measured
 *
 * Return: the depth of the tree. Defaults to 0 if tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
