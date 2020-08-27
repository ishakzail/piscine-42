#include <stdio.h>
#include "ft_strcpy.c"

int main()
{
	char dest[100] = "";
	char src[] = "Batman et Robin";

	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}
