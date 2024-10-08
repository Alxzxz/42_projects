#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
