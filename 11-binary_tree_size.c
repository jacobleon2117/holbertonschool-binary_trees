#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - size of a binary tree
 * @tree: tree being measured
 *
 * Return: size of the tree. goes to 0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l = 0, size_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		size_l = binary_tree_size(tree->left);
	if (tree->right != NULL)
		size_r = binary_tree_size(tree->right);

	return (size_l + size_r + 1);
}
