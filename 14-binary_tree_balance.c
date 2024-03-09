#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure
 * Return: height
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (0);
	else
	{
		if (tree)
		{
			l_height = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r_height = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l_height > r_height) ? l_height : r_height);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
