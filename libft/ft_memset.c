#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*puntero;

	i = 0;
	*puntero = (unsigned char *)ptr;
	while (i < num)
	{
		*puntero = value;
		i++;
		puntero++;
	}
	return (ptr);
}
