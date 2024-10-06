#include "libft.h"
char *ft_strrchr(const char *s, int c)

{
    int i;
    int last;

    i = 0;
    last = 0;
    while (s[i] != '\0')
    {
         if (s[i] == c)
         {
            last = i;
         }
         i++;
    }
    if (last == 0)
    {
        return NULL;
    }
    return (char *)&s[last]; /* con el & se devuelve la direccion
													    del puntero, y se castea para coincidir con
													    la declaracion de función */
}