char *ft_strcpy(char *restrict dst, const char *restrict src)
{
    int i; 

    i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0'; // tampoco es necesario porque un array rellena lo no ocupado con \0

    return (char *)dst;
}