#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);

	char *destino = (char *)dest;
	const char *source = (const char *)src;
	size_t i;

	for (i = 0; i < n; i++)
	{
		destino[i] = source[i];
	}

	return (destino);
}
