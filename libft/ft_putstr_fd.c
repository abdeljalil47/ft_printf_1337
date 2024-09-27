#include "libft.h"

void ft_putstr_fd(const char *s, int fd);

void ft_putstr_fd(const char *s, int fd)
{
    int i = 0;
    if (!s)
    {
        return ;
    }
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}

// int main()
// {
//     char *str = "hello, world!";
//     ft_putstr_fd(str, 1);
// }