#include "ft_list.h"
#include <stdio.h>

int main()
{
	t_list *begin;
	char str[] = "phrase de fin";
	char str_front[] = "Phrase debut";
	char str_middle[] = "Phrase de milieu";

	begin = ft_create_elem(str);
	printf("%s\n", begin->data);
	ft_list_push_front(&begin, str_middle);
	ft_list_push_front(&begin, str_front);
	printf("%s - %s - %s\n", begin->data, begin->next->data, begin->next->next->data);
	printf("La liste a desormais %d elements.\n", ft_list_size(begin));
	printf("Le dernier element de la liste contient : %s\n", ft_list_last(begin)->data);
	return (0);
}
