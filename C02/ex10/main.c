#include <string.h>
#include <stdio.h>
#include "ft_strlcpy.c"

int main ()
{
	char chaine_source[] = "blaa";
	char chaine_dest[50] = "";
	char chaine_dest_strlcpy[50] = "";
	
	printf("Voici ma chaine source : %s\n", chaine_source);
	printf("Voice ma chaine destinataire : %s\n", chaine_dest);
	printf("Resultat de ft_strlcpy (return et chaine) : %d - %s\n", ft_strlcpy(chaine_dest, chaine_source, 5), chaine_dest);
	printf("Resultat de la vrai fonction : %ld - %s\n", strlcpy(chaine_dest_strlcpy, chaine_source, 5), chaine_dest_strlcpy);

	return (0);
}
