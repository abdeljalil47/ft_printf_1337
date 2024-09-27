#include "ft_printf.h"

void ft_single_print(const char c, size_t *out_chr);

void ft_single_print(const char c, size_t *out_chr){
    write(1, &c, 1);
    out_chr += 1;
}