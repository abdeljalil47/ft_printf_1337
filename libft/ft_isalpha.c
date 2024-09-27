#include "libft.h"

int ft_isalpha(int c);

int ft_isalpha(int c)
{
    if (((unsigned char)c >= 'a' && (unsigned char)c <= 'z') || ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'))
    {
        return 1;
    }else
    {
        return 0;
    }
}

// int main() {
//    char c = '?';

//    if (ft_isalpha(c)) {
//       printf("%c is an alphabetic character.\n", c);
//    } else {
//       printf("%c is not an alphabetic character.\n", c);
//    }
//    return 0;
// }