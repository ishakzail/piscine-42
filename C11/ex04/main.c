#include <stdio.h>
#include <stdlib.h>
#include "ft_is_sort.c"

int ft_cmp(int a, int b)
{
	return (a - b);
}

int main(int argc, char **argv)
{
	int i = -1;
	int *tab;

	if(!(tab = malloc(sizeof(int) * (argc - 1))))
		return (0);
	while (++i < argc)
		tab[i - 1] = (argv[i][0] - '0');
	printf("%d\n", ft_is_sort(tab, argc - 1, &ft_cmp));
	free(tab);
	return (0);
}
