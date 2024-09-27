#include "libft.h"

void ft_putendl_fd(char const *s, int fd);

void ft_putendl_fd(char const *s, int fd)
{
    if (s == NULL || fd < 0)
    {
        return;
    }
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}

// int main()
// {
//     char *str = "hello world!";
//     ft_putendl_fd(str, 1);
// }