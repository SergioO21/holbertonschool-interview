#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node..
 *
 * @parent: Pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp, *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	tmp = parent;
	new->n = value;
	new->parent = new->left = new->right = NULL;

	while (tmp)
	{
		if (value > tmp->n)
		{
			if (tmp->right == NULL)
			{
				new->parent = tmp;
				tmp->right = new;
				break;
			}
			tmp = tmp->right;
		}

		else
		{
			if (tmp->left == NULL)
			{
				new->parent = tmp;
				tmp->left = new;
				break;
			}
			tmp = tmp->left;
		}
	}

	if (tmp == NULL)
		parent = new;

	return (new);
}
