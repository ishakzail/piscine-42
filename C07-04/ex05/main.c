#include "ft_split.c"
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	char **str_tab;
	int i = 0;

	str_tab = ft_split(argv[1], argv[2]);
	
	while (str_tab[i])
	{
		printf("%s\n", str_tab[i]);
		i++;
	}
	return (0);
}
