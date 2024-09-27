#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2);

char *ft_strjoin(char const *s1, char const *s2)
{
    char *array;
    int i = 0;
    int j = 0;
    if (!s1 || !s2)
        return 0;
    array = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (array == NULL)
        return NULL;
    while (s1[i])
    {
        array[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        array[i] = s2[j];
        j++;
        i++;
    }
    array[i] = '\0';
    return array;
}
