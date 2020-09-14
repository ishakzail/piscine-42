#include "ft_list.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_list *begin;
	
	if(argc > 1)
	{
		begin = ft_list_push_strs(argc, argv);
		printf("Le premier element contient : %s\n", begin->data);
		printf("Le dernier element contient : %s\n", ft_list_last(begin)->data);
	}
	return (0);
}
