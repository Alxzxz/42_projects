#include "libft.h"
#include <stdlib.h>

static int	count_digits(int n)
{
	int	count = (n <= 0) ? 1 : 0;

	if (n == -2147483648)
		return (11);
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	get_exponent(int n)
{
	int	exp = 1, digits;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (1000000000);
	digits = count_digits(n);
	if (n < 0)
		digits--;
	while (--digits)
		exp *= 10;
	return (exp);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			exp;
	int			i = 0;
	long		copy = n;

	exp = get_exponent(n);
	str = malloc(count_digits(n) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		copy = -copy;
	}
	while (exp > 0)
	{
		str[i++] = (copy / exp) + '0';
		copy %= exp;
		exp /= 10;
	}
	str[i] = '\0';
	return (str);
}
