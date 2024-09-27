#include "ft_printf.h"

int ft_printf(const char *format, ...);
void ft_print_all(va_list *args, const char frm, size_t *out_chr);

void ft_print_all(va_list *args, const char frm, size_t *out_chr)
{
    va_list dest;

    va_copy(dest, *args);
    if (frm == 'c')
    {
        ft_single_print(va_arg(*args, int), out_chr);
    }
    else if (frm == 's')
    {
        ft_str_print(va_arg(*args, char *), out_chr);
    }
    else if (frm == 'i' || frm == 'd')
    {
        ft_putnbr_base(va_arg(*args, int), "0123456789", out_chr);
    }
    else if (frm == 'p')
    {
        ft_str_print("0x", out_chr);
        ft_putnbr_base(va_arg(*args, unsigned long long), "0123456789ABCDEF", out_chr);
    }
    else if (frm == 'x')
    {
        ft_putnbr_base(va_arg(*args, unsigned int), "0123456789abcdef", out_chr);
    }
    else if (frm == 'X')
    {
        ft_putnbr_base(va_arg(*args, unsigned int), "0123456789ABCDEF", out_chr);
    }
    else if (frm == 'u')
    {
        ft_print_unsigned((long)va_arg(*args, unsigned int), "0123456789", out_chr);
    }
}

int ft_printf(const char *format, ...)
{
    va_list args;
    size_t out_chr;

    out_chr = 0;
    va_start(args, format);
    while (*format != '\0')
    {
        if (*format != '%')
        {
            ft_single_print(*format, &out_chr);
        }
        else if (*format == '%' && *(format + 1) == '%')
        {
            format++;
            ft_single_print(*format, &out_chr);
        }
        else
        {
            format++;
            ft_print_all(&args, *format, &out_chr);
        }

        format++;
    }
    va_end(args);
    return out_chr;
}
