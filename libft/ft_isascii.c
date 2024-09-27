#include "libft.h"

int ft_isascii(int c);

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return 1;
    }
    return 0;
}

// int main()
// {
//     int c = 128;
//     int a = 65;
//     int i = ft_isascii(c);

//     if (i != 0)
//     {
//         printf("is an ascii code %c because %d\n", c, i);
//     }else{
//         printf("is not ascii code %c because %d\n", c, i);
//     }

//     i = ft_isascii(a);
//     if (i != 0)
//     {
//         printf("is an ascii code %c because %d\n", a, i);
//     }else{
//         printf("is not ascii code %c because %d\n", a, i);
//     }
// }