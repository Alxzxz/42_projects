#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	size_t;

	size_t = 0;
	while (*s != '\0')
	{
		size_t++;
		s++;
	}
	return (size_t);
}
