#include <stdio.h>
#include "ft_strjoin.c"

int main (int argc, char **argv)
{
		
	char *chaine_concat = NULL;
	chaine_concat = ft_strjoin(argc, argv, "99999");

	printf("%s\n", chaine_concat);
	free(chaine_concat);
	return (0);
}
