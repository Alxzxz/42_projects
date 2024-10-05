void *ft_memcpy(void *dest, const void *src, size_t n)
{
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