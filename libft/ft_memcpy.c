#include "libft.h"

void* ft_memcpy(void* a, const void*  b, size_t n);

void* ft_memcpy(void* a, const void*  b, size_t n){
    unsigned char *dest = a;
    const unsigned char *src = b;
    size_t i = 0;
    if (!a && !b)
    {
        return NULL;
    }
    
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }

    return dest;
}

// int main() {
    
//     char *src = "hello";
//     char *dest;
    
//     ft_memcpy(dest, src, 5);
    
//     printf("Dest: %s\n", dest);    
//     return 0;
// }