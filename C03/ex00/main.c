#include <stdio.h>
#include "ft_strcmp.c"
#include <string.h>

int main()
{	
	char chaine_vide[] = "";
	char chaine_1[] = "blabla";
	char chaine_2[] = "Blabla";
	char chaine_3[] = "Super test";

	printf("%d - %d\n", ft_strcmp(chaine_vide, chaine_vide), strcmp(chaine_vide, chaine_vide));
	printf("%d - %d\n", ft_strcmp(chaine_vide, chaine_1), strcmp(chaine_vide, chaine_1));
	printf("%d - %d\n", ft_strcmp(chaine_1, chaine_1), strcmp(chaine_1, chaine_1));
	printf("%d - %d\n", ft_strcmp(chaine_1, chaine_vide), strcmp(chaine_1, chaine_vide));
	printf("%d - %d\n", ft_strcmp(chaine_1, chaine_2), strcmp(chaine_1, chaine_2));
	printf("%d - %d\n", ft_strcmp(chaine_2, chaine_3), strcmp(chaine_2, chaine_3));

	return 0;
}
