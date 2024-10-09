/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoyo-ar < amoyo-ar@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:04:44 by amoyo-ar          #+#    #+#             */
/*   Updated: 2024/10/09 17:43:34 by amoyo-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s1, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s1)
	{
		if (*s1 == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s1++;
	}
	return (count);
}

static char	**free_memory(char **dst, int count)
{
	while (count > 0)
	{
		free(dst[--count]);
	}
	free(dst);
	return (NULL);
}

static char	**split_words(char const *s, char **dst, char c, int count)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] && j < count)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = malloc(word_length(s, c, i) + 1);
		if (!dst[j])
			return (free_memory(dst, j));
		while (s[i] && s[i] != c)
		{
			dst[j][k] = s[i];
			k++;
			i++;
		}
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	dst = malloc(sizeof(char *) * (word_count + 1));
	if (!dst)
		return (NULL);
	return (split_words(s, dst, c, word_count));
}
