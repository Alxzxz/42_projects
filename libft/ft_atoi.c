#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	negativo;

	i = 0;
	num = 0;
	negativo = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			negativo = -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
		}
		i++;
	}
	return (num * negativo);
}

// int main(void)
// {
//     char numero[20] = " -3 2  1";

//     int i = ft_atoi(numero);

//     // int i = atoi(numero);

//     printf("\n%d", i);

// }