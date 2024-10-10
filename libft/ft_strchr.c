/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoyo-ar < amoyo-ar@student.42madrid.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:04:44 by amoyo-ar          #+#    #+#             */
/*   Updated: 2024/10/09 17:33:24 by amoyo-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
		{
			return ((char *) s);
		}
		s++;
	}
	if (a == '\0')
		return ((char *) s);
	return (NULL);
}

// int main()
// {
//     const char *cadena = "Hola, mundo";
//     char caracter = 'ñ';
//     char *resultado = ft_strchr(cadena, caracter);

//     if (resultado != NULL) {
//         printf("Caracter '%c' encontrado", resultado);
//     } else {
//         printf("Caracter '%c' no encontrado\n", caracter);
//     }

//     return 0;
// }