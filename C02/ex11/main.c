#include <stdio.h>
#include <stdlib.h>
#include "ft_putstr_non_printable.c"

int main()
{
	char chaine[] = "a";

	chaine[0] = -1;	
	ft_putstr_non_printable(chaine);

	return (0);
}
