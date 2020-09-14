#include "ft_list.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_list *begin;
	
	if(argc > 1)
	{
		begin = ft_list_push_strs(argc, argv);
		printf("Le premier element contient : %s\n", begin->data);
		printf("Le troisieme element est : %s\n", ft_list_at(begin, 2)->data);
		printf("Le dernier element contient : %s\n", ft_list_last(begin)->data);
		ft_list_reverse(&begin);
		printf("Le premier element contient : %s\n", begin->data);
		printf("Le troisieme element est : %s\n", ft_list_at(begin, 2)->data);
		printf("Le dernier element contient : %s\n", ft_list_last(begin)->data);
	}
	return (0);
}
