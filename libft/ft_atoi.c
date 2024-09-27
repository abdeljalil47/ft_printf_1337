#include "libft.h"

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == 32 || str[i] == '\t')
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }else
    {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return sign * result;
}

// int main(int argc, char const *argv[])
// {
//     (void)argc;
//     int m = 0;
//     char str[1024];
//     while (argv[1][m] != '\0')
//     {
//         str[m] = argv[1][m];
//         m++;
//     }

//     str[m]='\0';

//     int i = ft_atoi(str);
//     printf("%d\n", i);

//     return 0;
// }
