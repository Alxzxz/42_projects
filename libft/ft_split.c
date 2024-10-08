#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	count_words(char const *s1, char c)
{
	int	count = 0, in_word = 0;

	while (*s1)
	{
		if (*s1 == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s1++;
	}
	return (count);
}

static int	word_length(char const *s2, char c, int index)
{
	int	length = 0;

	while (s2[index] && s2[index] != c)
	{
		length++;
		index++;
	}
	return (length);
}

static char	**free_memory(char **dst, int count)
{
	while (count > 0)
		free(dst[--count]);
	free(dst);
	return (NULL);
}

static char	**split_words(char const *s, char **dst, char c, int count)
{
	int	i = 0, j = 0;

	while (s[i] && j < count)
	{
		int k = 0;
		while (s[i] == c)
			i++;
		dst[j] = malloc(word_length(s, c, i) + 1);
		if (!dst[j])
			return (free_memory(dst, j));
		while (s[i] && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	dst = malloc(sizeof(char *) * (word_count + 1));
	if (!dst)
		return (NULL);
	return (split_words(s, dst, c, word_count));
}
