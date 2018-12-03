#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memset(void *ptr, int x, size_t n)
{
	int i;
	char *str;

	str = (char*)ptr;
	i = 0;
	while (n-- != 0)
	{
		str[i++] = (char)x;
	}
	return (ptr);
}

int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore memset(): %s\n", str);
	memset(str + 13, '.', 5 * sizeof(char));
	printf("After memset(): %s", str);

	printf("\nBefore memset(): %s\n", str);
	ft_memset(str + 18, '1', 3 * sizeof(char));
	printf("After memset(): %s", str);

	return (0);
}
