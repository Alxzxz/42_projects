#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
int len;
char *buffer;

len = strlen(s1);
buffer = malloc(len + 1);

if (buffer == NULL)
    return NULL;

ft_strcpy(buffer, s1);
return buffer;
}

// int main(void)
// {

//     char og[11] = "hola pepe";

//     char *fake = ft_strdup(og);

//     printf("\n%s\n", og);
//     printf("\n%s\n", fake);

//     return 0;
// }