#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*puntero;

	puntero = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		puntero[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
