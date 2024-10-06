#include "libft.h"

void *ft_memset(void *ptr, int value, size_t num)
{
    size_t i;
    i = 0;
    
    unsigned char *puntero = (unsigned char *)ptr;
    
    while (i < num)
      {
        *puntero = value;
        i++;
        puntero++;
      }
    return ptr;
}