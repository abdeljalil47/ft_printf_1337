#include "ft_printf.h"

void ft_str_print(const char *str, size_t *out_chr);

void ft_str_print(const char *str, size_t *out_chr){
    if (*str == '\0')
    {
        write(1, "(null)", 6);
        out_chr += 6;
    }
    else
        while (*str != '\0')
        {
            write(1, str, 1);
            out_chr += 1;
            str++;
        }
}