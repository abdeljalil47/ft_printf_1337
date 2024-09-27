#include "libft.h"

char	*ft_strdup(const char *src);

char	*ft_strdup(const char *src)
{
    size_t i = 0;
    size_t size_src;
    if (src[0] == '\0')
    {
        return NULL;
    }
    size_src = ft_strlen(src);
    char *palce = (char *)malloc((size_src + 1) * (sizeof(char)));
    if (palce == NULL)
    {
        return NULL;
    }
    i = 0;
    while (src[i] != '\0')
    {
        palce[i] = src[i];
        i++;
    }
    palce[i] = '\0';
    return palce;
}

// int main()
// {
//     char *str = "hello, world!";
//     char *copy;

//     copy = ft_strdup(str);
//     printf("the original strings is: %s\n", str);
//     printf("the copy strings is: %s\n", ft_toupper(copy));
//     return 0;
// }