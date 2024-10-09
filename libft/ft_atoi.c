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

int	ft_atoi(const char *str)
{
	size_t	i;
	int		signo;
	int		numero;

	i = 0;
	signo = 1;
	numero = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numero = numero * 10 + (str[i] - '0');
		i++;
	}
	return (signo * numero);
}

// int main(void)
// {
//     char numero[20] = " -3 2  1";

//     int i = ft_atoi(numero);

//     // int i = atoi(numero);

//     printf("\n%d", i);

// }