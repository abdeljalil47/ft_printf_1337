#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n);

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i = 0;
    if (n == 0)
    {
        return 0;
    }
    while (i < n && (str1[i] || str2[i]))
    {
        if (str1[i] != str2[i])
        {
            return (int )(str1 - str2);
        }
        i++;
    }
    return 0;
}

// int main() 
// {  
//    char str_1[] = "css";  
//    char str_2[] = "css";
//    int i = ft_strncmp(str_1, str_2, strlen(str_2));
//    if (ft_strncmp(str_1, str_2, strlen(str_2)) == 0)
//    {  
//       printf("The strings '%s' and '%s' are equal %d.\n", str_1, str_2, i);  
//    }  
//    else 
//    {  
//       printf("The strings '%s' and '%s' are not equal %d.\n", str_1, str_2, i);  
//    }  
//    return 0;  
// }  