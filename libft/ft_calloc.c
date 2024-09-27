#include "libft.h"

void *ft_calloc(size_t nitems, size_t size);
void ft_bzero(void *s, size_t n);

void *ft_calloc(size_t nitems, size_t size)
{
    char *array;

    array = (void *)malloc(nitems * size);
    if (array == NULL)
    {
        return NULL;
    }
    ft_bzero(array, (nitems * size));
    return array;
}

// void ft_bzero(void *s, size_t n){
//     size_t i = 0;
//     char *str = s;
//     while (i < n)
//     {
//         str[i] = 0;
//         i++;
//     }
// }

// int main()
// {
//     int n = 5;
//     int *array;
//     array = ft_calloc(n, sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", array[i]);
//     }
//     return 0;
// }