#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n);

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t size_dest;
    size_t size_src;
    size_t i;

    if (!dest || !src)
        return (0); // Return 0 if either pointer is NULL

    size_dest = ft_strlen(dest);
    size_src = ft_strlen(src);

    // If the destination buffer size is zero, return the length of src
    if (n == 0)
        return (size_src);

    // If the destination size is larger than or equal to n, return size_src + n
    if (size_dest >= n)
        return (size_src + n);

    // Copy characters from src to dest
    i = 0;
    while (src[i] && (size_dest + i + 1) < n) // +1 for the null terminator
    {
        dest[size_dest + i] = src[i];
        i++;
    }
    
    // Null-terminate dest
    dest[size_dest + i] = '\0';

    return (size_dest + size_src);
}


// int main()
// {
//     int size = 16;
//     char buffer[] = "This is ";
//     char last[] = "a potentially long string";
//     size_t *r;

//     r = ft_strlcat(buffer,last,size);

//     puts(buffer);
//     printf("Value returned: %d\n",r);
    
//     return(0);
// }