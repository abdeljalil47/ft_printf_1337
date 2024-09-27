#include "libft.h"

int ft_isalnum(int c);

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1;
    }
    return 0;
}

// int main() {
//    char val1 = 's';
//    char val2 = '8';
//    char val3 = '$';

//    if(ft_isalnum(val1))
//         printf("The character is alphanumeric\n");
//    else
//         printf("The character is not alphanumeric\n");
//    if(ft_isalnum(val2))
//         printf("The character is alphanumeric\n");
//    else
//         printf("The character is not alphanumeric\n");
//    if(ft_isalnum(val3))
//         printf("The character is alphanumeric\n");
//    else
//         printf("The character is not alphanumeric\n");
//    return 0;
// }