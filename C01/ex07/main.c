#include "ft_rev_int_tab.c"
#include <stdio.h>

int main()
{
	int tableau_pair[8] = {0, 5, 23, 5, 7, 8, 6, 785};
	int tableau_impair[7] = {19, 56, 65, 78, 1, 0, 10};
	int i = 0, j = 0;

	printf("Le premier tableau est : ");
	while (i < 8)
	{
		printf("%d, ", tableau_pair[i]);
		i++;
	}
	i = 0;
	printf("\n Apres le tri, c'est : ");
	ft_rev_int_tab(tableau_pair, 8);
	while (i < 8)
	{
		printf("%d, ", tableau_pair[i]);
		i++;
	}

    printf("\nLe deuxieme tableau est : ");
	while (j < 7)
	{
		printf("%d, ", tableau_impair[j]);
		j++;
	}
	j = 0;
	ft_rev_int_tab(tableau_impair, 7);
	printf("\n Apres le tri, c'est : ");
	while (j < 7)
	{
		printf("%d, ", tableau_impair[j]);
		j++;
	}

	return 0;

}
