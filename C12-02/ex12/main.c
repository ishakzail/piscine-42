#include "ft_list.h"
#include <stdio.h>

void ft_printf(void *str)
{
	printf("%s\n", (char*)str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	free_str(void *str)
{
	str = NULL;
}

int main(int argc, char **argv)
{
	t_list *begin;
	
	if(argc > 1)
	{
		begin = ft_list_push_strs(argc, argv);
		printf("On affiche les mots : \n");
		ft_list_foreach(begin, &ft_printf);
		printf("On applique la fonction en mettant dataref = test\n");
		ft_list_remove_if(&begin, "test", &ft_strcmp, &free_str);
		printf("On reaffiche la liste : \n");
		ft_list_foreach(begin, &ft_printf);
	}
	return (0);
}
