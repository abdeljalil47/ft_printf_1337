#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n);

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    const unsigned char *s1 = str1;
    const unsigned char *s2 = str2;
    size_t i = 0;

    if (n == 0)
        return 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
        {
            return (int)(s1 - s2);
        }
        i++;
    }
    return 0;
}

// int main() {
//    int arr1[] = {1, 2, 3, 4, 5};
//    int arr2[] = {1, 2, 3, 4, 5};

//    int result = ft_memcmp(arr1, arr2, sizeof(arr1));

//    if (result == 0) {
//        printf("Arrays are equal\n");
//        printf("%d\n", result);
//    } else {
//        printf("Arrays are not equal\n");
//        printf("%d\n", result);
//    }
//     return 0;
// }