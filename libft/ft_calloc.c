#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;

	buffer = malloc(count * size);
	if (buffer == NULL)
		return (NULL);
	ft_memset(buffer, 0, count * size);
	return (buffer);
}

// int main() {
//     size_t n = 5; // Número de elementos
//     int *arr = (int *)ft_calloc(n, sizeof(int));
// Asigna memoria para un arreglo de enteros

//     // Imprime el arreglo (todos los valores deberían ser cero)
//     for (size_t i = 0; i < n; i++) {
//         printf("arr[%zu] = %d\n", i, arr[i]);
//     }

//     free(arr); // Libera la memoria asignada
//     return (0);
// }