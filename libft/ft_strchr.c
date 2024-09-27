#include "libft.h"

char *ft_strchr(const char *str, int search_str);

char *ft_strchr(const char *str, int search_str)
{
    size_t i = 0;
    unsigned char c = (unsigned char)search_str;

    if (c == '\0')
        return (char *)(str);
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return (char *)(str + i);
        }
        i++;
    }
    return NULL;
}

// int main()
// {
//     char str[] = "hello, world";
//     char c = "";
//     char *res = ft_strchr(str, c);
//     printf("%s\n", res);
//     return 0;
// }