#include "libft.h"

char *ft_strrchr(const char *str, int c);
char *ft_strrchr(const char *str, int c)
{
    unsigned char find = (unsigned char)c;
    size_t i = 0;
    while (str[i])
    {
        if (str[i] == find)
        {
            return (char *)(str + i);
        }
        i++;
    }
    return NULL;
}

// int main() {
//    const char str[] = "Tutorialspoint";
//    const char ch = 'n';

//    char* ptr = ft_strrchr(str, ch);

//    if (ptr) {
//        printf("Last occurrence of '%c' in \"%s\" is at index %ld\n", ch, str, ptr - str);
//    } else {
//        printf("'%c' is not present in \"%s\"\n", ch, str);
//    }

//    return 0;
// }