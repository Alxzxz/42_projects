#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destino;
	const char	*source = (const char *)src;
	size_t		i;

	if (dest == NULL && src == NULL)
		return (NULL);
	destino = (char *)dest;
	for (i = 0; i < n; i++)
	{
		destino[i] = source[i];
	}
	return (destino);
}
