#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i = 0;
    char *substring;
    if (!s)
        return 0;
    substring = (char *)malloc(len * sizeof(char *) + 1);
    if (substring == NULL)
        return NULL;
    while (i < len)
    {
        substring[i] = s[start + i - 1];
        i++;
    }
    return substring;
}

// int main()
// {
//     char string[14] = "geeksforgeeks";
//     int post = 6;
//     int len = 5;
//     char *str = ft_substr(string, post, len);
//     printf("%s", str);
//     return 0;
// }