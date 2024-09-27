#include "libft.h"

void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes);

void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
    size_t i = 0;
    unsigned char *dest = dest_str;
    const unsigned char *src = src_str;

    if (!dest_str && !src_str)
    {
        return NULL;
    }
    if (dest > src)
    {
        dest += numBytes - 1;
        src += numBytes - 1;
        while (i < numBytes)
        {
            *dest-- = *src--;
            i++;
        }
    }
    else
        while (i < numBytes)
        {
            dest[i] = src[i];
            i++;
        }

    return dest;
}

// int main()
// {
//     char dest_str[] = "ol";
//     const char src_str[] = "newstring";
//     printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
//     ft_memmove(dest_str, src_str, 9);
//     printf("After memmove dest = %s, src = %s\n", dest_str, src_str);
//     return (0);
// }