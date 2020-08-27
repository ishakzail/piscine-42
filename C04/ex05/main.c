#include <stdio.h>
#include "ft_atoi_base.c"

int main()
{
	char base[] = "0123\n56789";
	char nombre_test[] = "123";

	printf("%d", ft_atoi_base(nombre_test, base));
	printf(" \n\t\r\f\v");
	return 0;
}
