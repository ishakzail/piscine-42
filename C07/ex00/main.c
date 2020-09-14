#include "ft_strdup.c"
#include <stdio.h>

int main()
{
	char chaine_a_dup[] = "blab bla";
	char *chaine_dup;

	chaine_dup = ft_strdup(chaine_a_dup);

	printf("Est-ce que la chaine a ete dup : %s\n", chaine_dup);
	free(chaine_dup);
	return 0;
}
