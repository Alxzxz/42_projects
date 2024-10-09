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
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	size_t				i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	if (ptr_dest == ptr_src || len == 0)
		return (dest);
	if (ptr_dest < ptr_src)
	{
		i = 0;
		while (i < len)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			ptr_dest[len] = ptr_src[len];
		}
	}
	return (dest);
}
