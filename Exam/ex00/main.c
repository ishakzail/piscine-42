#include "ft_rev_int_tab.c"
#include "ft_rev.c"
#include "ft_sort_int_tab.c"
#include <stdio.h>

int main()
{
	int tab[6] = {6, 2, 5, 4, 7, 6};
	int i = -1;
	int size = 6;
	char str[] = "Hungry for Happiness";

	ft_rev_int_tab(tab, size);
	while (++i < size)
		printf("%d\n", tab[i]);
	ft_rev(str);
	printf("%s\n", str);
	ft_sort_int_tab(tab, size);
	i = -1;
	while (++i < size)
		printf("%d - ", tab[i]);
	return (0);
}
