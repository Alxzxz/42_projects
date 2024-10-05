void ft_bzero(void *ptr, size_t num)

{
    size_t i;
    i = 0;
    
    unsigned char *puntero = (unsigned char *)ptr;
    
    while (i < num)
      {
        *puntero = '\0';
        i++;
        puntero++;
      }
}