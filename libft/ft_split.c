#include "libft.h"

// Function prototypes
char **ft_split(char const *s, char c);
int ft_count_s(char const *str, char c);
int ft_check_word(char str, char c);
char *ft_word(const char *s, char c);
int ft_len_sep(const char *s, char c);

int ft_check_word(char str, char c)
{
    return str == c;
}

int ft_count_s(char const *str, char c)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0')
    {
        while (str[i] && ft_check_word(str[i], c))
        {
            i++;
        }
        if (str[i])
        {
            j++;
        }
        while (str[i] && !ft_check_word(str[i], c))
        {
            i++;
        }
    }
    return j;
}

int ft_len_sep(const char *s, char c)
{
    int i = 0;
    while (s[i] && !ft_check_word(s[i], c))
    {
        i++;
    }
    return i;
}

char *ft_word(const char *s, char c)
{
    int len = ft_len_sep(s, c);
    int i = 0;
    char *array;

    array = (char *)malloc(sizeof(char) * (len + 1));
    if (!array)
        return NULL;  // Check malloc success
    while (i < len)
    {
        array[i] = s[i];
        i++;
    }
    array[i] = '\0';
    return array;
}

char **ft_split(char const *s, char c)
{
    char **array;
    int size_s = ft_count_s(s, c);
    int i = 0;
    int j = 0;

    array = (char **)malloc(sizeof(char *) * (size_s + 1));
    if (!array)
        return NULL;  // Check malloc success
    while (s[i])
    {
        while (s[i] && ft_check_word(s[i], c))
            i++;
        if (s[i])
        {
            array[j] = ft_word(s + i, c);
            j++;
        }
        while (s[i] && !ft_check_word(s[i], c))
            i++;
    }
    array[j] = NULL;  // Terminate array with NULL
    return array;
}

// int main()
// {
//     char *a = "jestemzzbogiemzalfa";
//     char **result = ft_split(a, 'z');

//     if (result)
//     {
//         for (int i = 0; result[i]; i++)
//         {
//             printf("%s\n", result[i]);
//             free(result[i]);
//         }
//         free(result);
//     }

//     return 0;
// }
