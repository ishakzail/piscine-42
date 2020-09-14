#include "../ex05/ft_show_tab.c"
#include "ft_strs_to_tab.c"
#ifndef FT_STOCK_STR_H

# define FT_STOCK_STR_H
# include "ft_stock_str.h"
#endif

int main (int argc, char **argv)
{
	t_stock_str *test;
	test = ft_strs_to_tab(argc, argv);
	ft_show_tab(test);
	free(test);
	return (0);
}
