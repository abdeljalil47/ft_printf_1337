#include "libft.h"

int ft_toupper(int ch);

int ft_toupper(int ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch += 32;
    }
    return ch;
}

// int main()
// {
//     char c = 'Z';
//     printf("%c", ft_toupper(c));
// }