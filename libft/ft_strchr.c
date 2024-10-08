#include "libft.h"
char *ft_strchr(const char *s, int c)

{
    while (*s != '\0')
    {
        if (*s == (char)c) /* 1 */
            break;
        s++;
    }
    if (*s == '\0' && c != '\0')
        return NULL;
    return (char *)s;
}