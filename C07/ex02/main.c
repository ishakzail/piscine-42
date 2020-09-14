#include <stdio.h>
#include "ft_ultimate_range.c"

int main()
{
	int *tab = NULL;
	int **point_on_tab = &tab;
	int min = 253;
	int max = 256;
	int table_len = 0;
	int i = 0;
	
	table_len = ft_ultimate_range(point_on_tab, min, max);
	if(table_len > 0)
	{
		while (i < table_len)
		{
			printf("%d -", (*point_on_tab)[i]);
			i++;
		}
		free(*point_on_tab);
	}
	printf("La taille du tableau est : %d\n", table_len);
	
	return (0);
}
