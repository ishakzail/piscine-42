#include "ft_list.h"
#include <unistd.h>
t_list	*ft_list_push_strs(int size, char **strs);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	if ((elem = malloc(sizeof(t_list))) != NULL)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}

void	ft_print_list(t_list *begin)
{
	while (begin)
	{
		ft_putstr(begin->data);
		begin = begin->next;
	}
}

int main(int argc, char **argv)
{
	t_list *begin;

	begin = ft_list_push_strs(argc, argv);
	ft_print_list(begin);
	return (0);
}
