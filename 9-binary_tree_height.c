#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - determines the height of a binary tree
 * @tree: the tree being measured
 *
 * Return: the height of the tree. Defaults to 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_l = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		height_r = binary_tree_height(tree->right) + 1;

	if (height_r > height_l)
		return (height_r);
	return (height_l);
}
