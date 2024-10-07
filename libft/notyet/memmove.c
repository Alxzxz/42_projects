#include "libft.h"

void	*ft_memmove(void *str1_dest, const void *str2_src, size_t n)
{
  unsigned char *dest = (unsigned char *)str1_dest;
  const unsigned char *src = (const unsigned char *)str2_src;
  size_t i;
  
  if (dest == src || n == 0) {
    return str1_dest;
  }
  
    if (src < dest && dest < src + n) {
        i = n;
        while (i > 0) {
            i--;
            dest[i] = src[i];
        }
    }
    else {
      return (memcpy(dest, src, n));
    }

  return ((void *)dest);  

}

// int main() {
//     char str[] = "Hello World";

//     // Copiar los primeros 5 caracteres a partir de la posición 6
//     ft_memmove(str + 6, str, 5);

//     printf("%s\n", str);  // Salida: Hello Hello
//     return 0;
// }
