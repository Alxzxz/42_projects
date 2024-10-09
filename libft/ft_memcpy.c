/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoyo-ar < amoyo-ar@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:04:44 by amoyo-ar          #+#    #+#             */
/*   Updated: 2024/10/09 12:04:47 by amoyo-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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
