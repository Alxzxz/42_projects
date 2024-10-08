#include "libft.h"
char *ft_strrchr(const char *s, int c)

{
    int i = ft_strlen(s);

    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)s + i);
        i--;
    }
    return (NULL); /* con el & se devuelve la direccion
						del puntero, y se castea para coincidir con
						la declaracion de función */
}