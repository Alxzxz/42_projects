#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    if (dest == NULL || src == NULL || n > 0)
        return NULL;
    char *destino = (char *)dest;
    char *source = (char *)src;
    size_t i;

    i = 0;

    while (i < n)
    {
        
        destino[i] = source[i];
        i++;

    }
    return (void *)destino;
}