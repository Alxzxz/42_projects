#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));

	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;

	substr = malloc(len + 1);
	if (!substr)
		return (NULL);

	i = 0;
	while (i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}