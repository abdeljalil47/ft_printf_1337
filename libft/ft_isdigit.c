#include "libft.h"

int ft_isdigit(int c);

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    return 0;
}

// int main() {
//    char ch = 'a';
//    if (ft_isdigit(ch)) {
//       printf("'%c' is a digit.\n", ch);
//    } else {
//       printf("'%c' is not a digit.\n", ch);
//    }
//    return 0;
// }