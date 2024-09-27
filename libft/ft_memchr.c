#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n);

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i = 0;
    const unsigned char *string = str;
    unsigned char find = (unsigned char)c;
    while (i < n)
    {
        if (string[i] == find)
        {
            return (void *)(string + i);
        }
        i++;
    }
    return (NULL);
}

// int main(void)
// {
//     const char testStr1[] = "Hello, world!";
//     char searchChar1 = '!';
//     size_t length1 = strlen(testStr1);

//     // Using ft_memchr
//     char *result1 = (char *)ft_memchr(testStr1, searchChar1, length1);
//     if (result1)
//     {
//         printf("Found '%c' at position: %ld\n", searchChar1, result1 - testStr1);
//     }
//     else
//     {
//         printf("Character '%c' not found in the string.\n", searchChar1);
//     }
//     return 0;
// }