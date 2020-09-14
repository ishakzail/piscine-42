#include "ft_list.h"
#include <stdio.h>

void ft_printf(void *str)
{
	printf("%s\n", (char*)str);
}

int main(int argc, char **argv)
{
	t_list *begin;
	t_list *begin2;
	
	if(argc > 1)
	{
		begin = ft_list_push_strs(argc, argv);
		begin2 = ft_list_push_strs(argc, argv);
		printf("On affiche les mots de la premiere liste : \n");
		ft_list_foreach(begin, &ft_printf);
		printf("On applique la fonction\n");
		ft_list_merge(&begin, begin2);
		printf("On reaffiche la liste : \n");
		ft_list_foreach(begin, &ft_printf);
	}
	return (0);
}
