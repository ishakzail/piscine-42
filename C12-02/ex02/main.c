#include "ft_list.h"
#include <stdio.h>

int main()
{
	t_list *begin;
	char str[] = "phrase de test";
	char str_front[] = "Phrase debut";

	begin = ft_create_elem(str);
	printf("%s\n", begin->data);
	ft_list_push_front(&begin, str_front);
	printf("%s\n%s\n", begin->data, begin->next->data);
	printf("La liste a desormais %d elements.\n", ft_list_size(begin));
	return (0);
}
