#include "ft_list.h"
#include <stdio.h>

void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);

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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	if (*begin_list)
		elem->next = *begin_list;
	*begin_list = elem;
}

int main()
{
	t_list *begin;
	char str[] = "chaine de test";
	char test[] = "chaine bla";
	char test3[] = "chaine testeteaaf";

	begin = NULL;
	ft_list_push_front(&begin, test);
	printf("%s\n", begin->data);
	ft_list_push_front(&begin, str);
	printf("%s\n", begin->data);
	ft_list_push_front(&begin, test3);
	printf("%d\n", ft_list_size(begin));
	return (0);
}
