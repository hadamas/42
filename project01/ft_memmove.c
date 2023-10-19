
#include "libft.h"

void    *memmove(void *str1, const void *str2, size_t n)
{
	size_t      i;

	if (!str1 && !str2)
		return (NULL);
	i = 0;
	if ((size_t)str1 - (size_t)str2 < n)
	{
		i = n - 1;
		while (i >= 0 && i < n)
		{
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
			i++;
		}
	}
	return (str1);
}