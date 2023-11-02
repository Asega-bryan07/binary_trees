#include "binary_trees.h"

/**
 * binary_tree_delete - it deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 * Description: If tree is NULL, should do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
