#include "libft.h"

void ft_putnbr_fd(int n, int fd);

void ft_putnbr_fd(int n, int fd){
    unsigned char out;
    if (fd < 0)
    {
        return ;
    }
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n == 0)
    {
        write(fd, "0", 1);
    }
    else if (n < 0)
    {
        n = -n;
        ft_putnbr_fd(n, fd);
    }
    else {
        if (n / 10 != 0)
        {
            ft_putnbr_fd(n / 10, fd);
        }
        out = n % 10 + '0';
        write(fd, &out, 1);
    }
}

// int main(){
//     int n = 0;
//     ft_putnbr_fd(n, 1);
// }