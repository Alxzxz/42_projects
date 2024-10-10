/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoyo-ar < amoyo-ar@student.42madrid.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:04:44 by amoyo-ar          #+#    #+#             */
/*   Updated: 2024/10/09 17:48:32 by amoyo-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	if (ptr_dest == ptr_src || len == 0)
		return (dest);
	if (ptr_dest < ptr_src)
	{
		while (len--)
		{
			*ptr_dest++ = *ptr_src++;
		}
	}
	else
	{
		ptr_dest += len;
		ptr_src += len;
		while (len--)
		{
			*(--ptr_dest) = *(--ptr_src);
		}
	}
	return (dest);
}
