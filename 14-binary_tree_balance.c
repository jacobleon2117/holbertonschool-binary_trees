int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_l = (int)binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		height_r = (int)binary_tree_height(tree->right) + 1;

	return (height_l - height_r);
}
