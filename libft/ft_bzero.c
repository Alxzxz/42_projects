/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoyo-ar < amoyo-ar@student.42madrid.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:04:44 by amoyo-ar          #+#    #+#             */
/*   Updated: 2024/10/09 17:11:38 by amoyo-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	size_t			i;
	unsigned char	*puntero;

	i = 0;
	puntero = (unsigned char *)ptr;
	while (i < num)
	{
		*puntero = '\0';
		i++;
		puntero++;
	}
}

// #include "libft.h"

// void	ft_bzero(void *ptr, size_t num)
// {
// 	size_t			i;
// 	unsigned char	*puntero;

// 	*puntero = (unsigned char *)ptr;
// 	i = 0;
// 	while (i < num)
// 	{
// 		*puntero = '\0';
// 		i++;
// 		puntero++;
// 	}
// }
