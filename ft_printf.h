#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include "libft/libft.h"

void ft_putnbr_base(long int nbr, const char *base, size_t *out_chr);
void ft_print_unsigned(unsigned int nbr, const char *base, size_t *out_chr);
void ft_single_print(const char c, size_t *out_chr);
void ft_str_print(const char *str, size_t *out_chr);
int ft_printf(const char *format, ...);

#endif