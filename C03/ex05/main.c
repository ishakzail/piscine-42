#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_strlcat.c"

int main(int argc, char **argv)
{
	char dst[100] = "";
	char dst_ft[100] = "";

	if (argc == 3)
	{
		printf("%lu - %s\n", 
				strlcat(dst, (const char*)(argv[1]), 
					(size_t)(atoi(argv[2]))), dst);
		printf("%d - %s\n", 
				ft_strlcat(dst_ft, (argv[1]), 
					atoi(argv[2])), dst_ft);
		printf("%d\n", strcmp(dst, dst_ft));
	}
	return (0);
}
