/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoyo-ar < amoyo-ar@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:04:44 by amoyo-ar          #+#    #+#             */
/*   Updated: 2024/10/09 17:46:01 by amoyo-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
	}
	if (n == -2147483648)
	{
		return (11);
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	get_exponent(int n)
{
	int	exp;
	int	digits;

	exp = 1;
	if (n == 0)
	{
		return (1);
	}
	if (n == -2147483648)
	{
		return (1000000000);
	}
	digits = count_digits(n);
	if (n < 0)
	{
		digits--;
	}
	while (digits > 1)
	{
		exp *= 10;
		digits--;
	}
	return (exp);
}

static void	fill_str(char *str, long copy, int exp, int *i)
{
	while (exp > 0)
	{
		str[*i] = (copy / exp) + '0';
		copy %= exp;
		exp /= 10;
		(*i)++;
	}
	str[*i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		exp;
	int		i;
	long	copy;

	i = 0;
	copy = n;
	exp = get_exponent(n);
	str = malloc(count_digits(n) + 1);
	if (!str)
	{
		return (NULL);
	}
	if (n < 0)
	{
		str[i] = '-';
		copy = -copy;
		i++;
	}
	fill_str(str, copy, exp, &i);
	return (str);
}
