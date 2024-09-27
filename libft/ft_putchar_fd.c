#include "libft.h"

void ft_putchar_fd(char c, int fd);

/*
    += write(1, &C, 1) => .first one 1 main is File Descriptor (1) writes data to the standard output, which is usually the terminal or console.
                          .C is is a pointer to the buffer containing the data you want to write.
                          .the second 1 is Number of Bytes (1) the number of bytes to write from the buffer 'c'.
*/

void ft_putchar_fd(char c, int fd){
    if (fd < 0)
    {
        return ;
    }
    write(fd, &c, 1);
}

// int main()
// {
//     char c = 'M';
//     ft_putchar_fd(c, 1);
// }