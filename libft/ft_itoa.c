#include "libft.h"

char *ft_itoa(int n);
static int ft_count(int n);

static int ft_count(int n){
    int i = 0;

    if (n == 0)
        return 1;
    
    if (n < 0)
    {
        n = -n;
        i++;
    }
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    return i;
}
char *ft_itoa(int n){
    char *buffer;
    long int len;
    int i;

    len = ft_count(n);
    i = len - 1;
    buffer = (char *)malloc((len + 1) * sizeof(char));
    if (buffer == NULL)
        return NULL;
    buffer[len] = '\0';
    if (n == 0)
    {
        buffer[0] = '0';
        return buffer;
    }
    if (n < 0)
    {
        buffer[0] = '-';
        n = -n;
    }
    while (n > 0)
    {
        buffer[i] = (n % 10) + '0';
        n /= 10;
        i--;
    }
    return buffer;
}

// int main() {
//     printf("%s\n", ft_itoa(123)); 
//     printf("%s\n", ft_itoa(-456)); 
//     printf("%s\n", ft_itoa(0));    
//     return 0;
// }