#include "libft.h"
#include <stdio.h>


size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t aux;

    i = ft_strlen(dst);
    aux = 0;

    if (dstsize == 0)
        return (ft_strlen(src) + ft_strlen(dst));

    while ((src[aux] != '\0') && (i < dstsize - 1))
    {
        dst[i] = src[aux];
        i++;
        aux++;
    }
    dst[i] = '\0';
    return (ft_strlen(src) + ft_strlen(dst));
}

// int main(void)
// {
//     char destino[10] = "hola ";
//     char fuente[] = "mundo";

//     char destino2[10] = "hola ";
//     char fuente2[] = "mundo";

//     printf("%d\n", sizeof(destino));

//     // `strlcat` concatenará hasta 9 caracteres en total (el tamaño de `hola`).
//     ft_strlcat(destino, fuente, sizeof(fuente));
//     strlcat(destino2, fuente2, sizeof(fuente2));

//     // Imprimir la cadena resultante en `hola`.
//     printf("%s\n", destino);
//     printf("%s\n", destino2);


//     return 0;
// }
