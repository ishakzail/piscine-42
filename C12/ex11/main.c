#include "ft_list.h"
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
	t_list *begin;
	t_list *found;
	
	if(argc > 1)
	{
		begin = ft_list_push_strs(argc, argv);
		found = ft_list_find(begin, "test", &ft_strcmp);
		if (found)
			printf("%s\n", found->data);
	}
	return (0);
}
