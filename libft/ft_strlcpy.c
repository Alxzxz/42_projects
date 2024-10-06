#include <stdio.h>

int ft_strlen(const char *s)
{
    int len;
    len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i; 

    i = 0;
    while ((src[i] != '\0') && (i < dstsize))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';

    return ft_strlen(dst);
}