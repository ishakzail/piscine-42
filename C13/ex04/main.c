#include "ft_btree.h"
#include <stdio.h>

void ft_printf(void *str)
{
	printf("%s,", str);
}

int ft_atoi(char *str)
{
	int r_value;
	int i;

	r_value = 0;
	i = 0;
	while (str[i])
	{
		r_value = r_value * 10 + (str[i] - '0');
		i++;
	}
	return (r_value);
}

int	ft_strcmp(void *v1, void *v2)
{
	return (ft_atoi((char*)v1) - ft_atoi((char*)v2));
}

int main(int argc, char **argv)
{
	t_btree *r;
	int i;

	r = NULL;
	i = 1;
	while (i < argc)
	{
		btree_insert_data(&r, argv[i], &ft_strcmp);
		i++;
	}
	btree_apply_prefix(r, &ft_printf);
	return (0);
}
