#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = ft_strlen(dst);
	j = 0;
	dst_len = i;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= dst_len)
		return (ft_strlen(src) + dstsize);
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}

// int main(void)
// {
//     char destino[10] = "hola ";
//     char fuente[] = "mundo";

//     char destino2[10] = "hola ";
//     char fuente2[] = "mundo";

//     printf("%d\n", sizeof(destino));

//
// `strlcat` concatenará hasta 9 caracteres en total (el tamaño de `hola`).
//     ft_strlcat(destino, fuente, sizeof(fuente));
//     strlcat(destino2, fuente2, sizeof(fuente2));

//     // Imprimir la cadena resultante en `hola`.
//     printf("%s\n", destino);
//     printf("%s\n", destino2);

//     return (0);
// }
