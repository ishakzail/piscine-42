#include "ft_list.h"
#include <stdio.h>

int main()
{
	t_list *elem;
	char str[] = "phrase de test";

	elem = ft_create_elem(str);
	printf("%s\n", elem->data);
	return (0);
}
