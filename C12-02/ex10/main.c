#include "ft_list.h"
#include <stdio.h>

void	ft_printf(void *str)
{
	printf("%s\n", (char *)str);
}

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
	
	if(argc > 1)
	{
		begin = ft_list_push_strs(argc, argv);
		ft_list_foreach_if(begin, &ft_printf, "test", &ft_strcmp);		
	}
	return (0);
}
