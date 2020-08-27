#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

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
		write(1, "\n", 1);
		begin = begin->next;
	}
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*begin;
	t_list	*elem;

	i = 0;
	begin = NULL;
	while (i < size)
	{
		elem = ft_create_elem(strs[i]);
		if (begin)
			elem->next = begin;
		begin = elem;
		i++;
	}
	return (begin);
}

void	ft_free(void *data)
{
	free(data);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *next_pt;

	(void)free_fct;
	while (begin_list)
	{
		next_pt = begin_list->next;
		//(*free_fct)(begin_list->data);
		free(begin_list);	
		begin_list = next_pt;
	}
}

int main(int argc, char **argv)
{
	t_list *begin;

	begin = ft_list_push_strs(argc, argv);
	ft_print_list(begin);
	ft_list_clear(begin, &ft_free);
	printf("%s\n", begin->data);
	return (0);
}