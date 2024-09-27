#include "libft.h"

int ft_isprint (int c);

int ft_isprint (int c)
{
    if (c >= 32 && c <= 126)
    {
        return 1;
    }
    return 0;
}

// int main()
// {
//     char c = 0;

//     if (ft_isprint(c))
//     {
//         printf("is print character %c\n");
//     }else
//     {
//         printf("not print %c");
//     }
// }