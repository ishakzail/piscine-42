#include <stdio.h>
#include "ft_str_is_alpha.c"

int main()
{
	char chaine_alpha[] = "aaaabbbsbdfjkkkcjdhejeejhfnfjQQQQDHKSJhhhkdjAASJJFK";
	char chaine_non_alpha[] = "aaagggfffsdsddsQQQ[]_avdbn";
	char chaine_vide[] = "";

	printf("La premiere chaine est alphabetique : %s\n", chaine_alpha);
	printf("La deuxieme chaine n'est pas alphabetique : %s\n", chaine_non_alpha);
	printf("Ma troisieme chaine est vide \n");

	printf("Est-ce que ma premier chaine est alpha ? %d\n", ft_str_is_alpha(chaine_alpha));
	printf("Est-ce que ma deuxieme chaine est alpha ? %d\n", ft_str_is_alpha(chaine_non_alpha));
	printf("Que renvoie ma troisieme chaine qui est vide ? %d\n", ft_str_is_alpha(chaine_vide));

	return 0;
}
