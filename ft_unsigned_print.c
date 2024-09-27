#include <unistd.h>

void ft_unsigned_print(unsigned int n);
void ft_single_print(const char c);
/* Just for testing and know hoz unsigned number and print them works  */

void ft_unsigned_print(unsigned int n){
    if (n >= 10){
        ft_unsigned_print(n / 10);
    }
    ft_single_print((n % 10) + '0');
}

void ft_single_print(const char c){
    write(1, &c, 1);
}

int main(){
    unsigned int n = -10;
    ft_unsigned_print(n);
}