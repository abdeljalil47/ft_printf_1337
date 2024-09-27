#include "ft_printf.h"

void ft_putnbr_base(long int nbr, const char *base, size_t *out_chr);
int ft_check_base(const char *base);

int ft_check_base(const char *base) {
    int i = 0;
    int j;
    
    if (!base || base[0] == '\0' || base[1] == '\0') {
        return 0;
    }

    while (base[i]) {
        if (base[i] == '-' || base[i] == '+' || base[i] < 32) {
            return 0;
        }
        j = i + 1;
        while (base[j]) {
            if (base[i] == base[j]) {
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;
}

void ft_putnbr_base(long int nbr, const char *base, size_t *out_chr) {
    unsigned int size;
    unsigned int nb;

    if (!ft_check_base(base)) {
        return;
    }

    size = ft_strlen(base);
    if (nbr < 0) {
        ft_single_print('-', out_chr);
        nb = -nbr; 
    } else {
        nb = nbr; 
    }

    if (nb >= size) {
        ft_putnbr_base(nb / size, base, out_chr);
    }
    ft_single_print(base[nb % size], out_chr);
}