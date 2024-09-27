#include "libft.h"

/*-----
    static typtTheFunction name_function();
    static its help for using this function only in this file
        also if there is another function the same name it not gonna shows
        any errors;
        A static function is only visible within the file where it is defined.
        Other files in the same project cannot see or call this function,
        which helps prevent unintended usage and potential naming conflicts.
-----*/

char *ft_strtrim(char const *s1, char const *set);
int check_set(const char *set, const char c);

int check_set(const char *set, char const c)
{
    int i = 0;
    while (set[i])
    {
        if (set[i] == c)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
char *ft_strtrim(char const *s1, char const *set)
{
    char *new;
    size_t size;
    size_t i = 0;

    if (!s1 || !set)
        return 0;
    while (s1)
    {
        if (check_set(set, *s1) == 1)
        {
            s1++;
        }
        else
            break;
    }
    size = ft_strlen(s1);
    while (size != 0)
    {
        if (check_set(set, s1[size - 1]) == 1)
        {
            size--;
        }
        else
            break;
    }
    new = (char *)malloc(size * sizeof(char) + 1);
    if (new == NULL)
        return NULL;
    while (i < size)
    {
        new[i] = s1[i];
        i++;
    }
    
    new[i] = '\0';
    return new;
}

// int main()
// {
//     char *str = "hello, world!";
//     char *set = "he!";
//     char *res = ft_strtrim(str, set);
//     printf("%s", res);
//     return 0;
// }