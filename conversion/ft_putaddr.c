#include "../printf.h"

int ft_putaddr(unsigned long long int n)
{
    int len;

    len = 0;
    len += ft_putstr("0x");
    len += ft_puthex(n, "0123456789abcdef");
    return (len);
}