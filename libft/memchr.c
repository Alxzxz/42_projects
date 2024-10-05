void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    unsigned char *ptr = (unsigned char *)s;

    i = 0;
    while (i < n)
    {
        if (*ptr == (unsigned char)c) /* DUDA */
        {
            return (void *)ptr; /* es void y no char para 
                                    casar con el prototipo*/
        }
        ptr++;
        i++;
    }
    return NULL;
}