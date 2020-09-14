#include "ft_list.h"
#include <stdio.h>

void	ft_printf(void *str)
{
	printf("%s\n", (char *)str);
}

int main(int argc, char **argv)
{
	t_list *begin;
	
	if(argc > 1)
	{
		begin = ft_list_push_strs(argc, argv);
		ft_list_foreach(begin, &ft_printf);		
	}
	return (0);
}
