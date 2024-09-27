#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char to_upper(unsigned int i, char c);
size_t ft_strlen(const char *str);

/*
    += site function it change the element from *s by basing it to *f that pointed to function with 
        parametrs (unsigned int, char)
*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    size_t len = ft_strlen(s);
    char *array;
    size_t i = 0;

    if (s == NULL || f == NULL)
        return 0;
    
    array = (char *)malloc(1 + len * sizeof(char));
    if (array == NULL)
        return NULL;
    while (i < len)
    {
        array[i] = f((unsigned int)i, s[i]);
        i++;
    }
    return array;
}

// size_t ft_strlen(const char *str)
// {
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     return (i);
// }
// char to_upper(unsigned int i, char c){
//     if (c >= 'a' && c <= 'z')
//     {
//         return c - 32;
//     }
//     return c;
// }
// int main(){
//     char str[] = "hello, world!";
//     char *res = ft_strmapi(str, to_upper);
//     printf("%s", res);
//     return 0;
// } 