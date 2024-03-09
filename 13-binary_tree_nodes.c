#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the odes with at least 1 child in abinary tree
 * @tree: pointer to the rooot node of the tree to count the number of nodes
 * Return: number of the nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
