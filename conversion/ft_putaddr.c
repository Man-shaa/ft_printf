#include "../printf.h"

int ft_putaddr(unsigned long long int n)
{
    int len;

    len = 0;
    if (!n)
        return (len);
    len += write(1, "0x", 2);
    len += ft_puthex(n, "0123456789abcdef");
    return (len);
}