#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	b = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (b);
}
