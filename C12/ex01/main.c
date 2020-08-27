#include "ft_list.h"
#include <stdio.h>

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

int main()
{
	//t_list *elem;
	t_list *begin;
	char str[] = "chaine de test";
	char test[] = "chaine bla";

	begin = ft_create_elem(test);
	printf("%s\n", begin->data);
	ft_list_push_front(&begin, str);
	printf("Le premier element est maintenant : %s\n", begin->data);
	printf("Et le suivant est : %s\n", begin->next->data);
	return (0);
}
