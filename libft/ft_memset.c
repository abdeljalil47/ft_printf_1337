#include "libft.h"

void *ft_memset(void *str, int c, size_t n);

void *ft_memset(void *str, int c, size_t n){
    size_t len = 0;
    unsigned char *s = str;

    while (len < n)
    {
        s[len] = c;
        len++;
    }
    return str;
}

// int main() {
//    char str[20];
//    memset(str, 'Z', 10);
//    printf("String after memset(): %s\n", str);
//    return 0;
// }