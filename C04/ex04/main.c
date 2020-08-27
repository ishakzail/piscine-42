#include <stdio.h>
#include "ft_putnbr_base.c"

int main()
{
	//char base_hexa[] = "0123456789abcdef";
	char base_dec[] = "0123456789";
	//char base_bin[] = "01";
	//char base_octale[] = "poneyvif";
	//char base_interdite1[] = "";
	//char base_interdite2[] = "010";
	//char base_interdite3[] = "0123456789+";

	ft_putnbr_base(10, base_dec);

	return 0;
}
