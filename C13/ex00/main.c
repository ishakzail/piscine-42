#include "ft_btree.h"
#include <stdio.h>

int main()
{
	t_btree *node;
	char	str[] = "Test";

	node = btree_create_node(str);
	printf("%s\n", node->item);
	return (0);
}
