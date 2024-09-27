#include "libft.h"

int ft_toupper(int ch);

int ft_toupper(int ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
    }
    return ch;
}

// int main()
// {
//     char c = 'a';
//     printf("%c", ft_toupper(c));
// }