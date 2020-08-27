#include <stdio.h>
#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
	char base_from[] = "0123456789";
	char base_to[] = "0123456789ABCDEF";
	char nombre[] = "-2147483648";
	char *nouveau_nombre;

	nouveau_nombre = ft_convert_base(nombre, base_from, base_to);

	printf("Le nombre %s vaut : %s\n", nombre, nouveau_nombre);
	free(nouveau_nombre);

	return 0;
}
