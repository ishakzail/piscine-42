#include "ft_list.h"
#include <stdio.h>

void ft_list_push_back(t_list **begin_list, void *data);

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

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

int main()
{
	t_list *begin;
	t_list *last;
	char str[] = "Deuxieme element";
	char test[] = "Dernier element";
	char test3[] = "Premier element";

	begin = NULL;
	ft_list_push_back(&begin, test3);
	ft_list_push_back(&begin, str);
	ft_list_push_back(&begin, test);
	last = ft_list_last(begin);
	printf("%s\n", last->data);
	return (0);
}
