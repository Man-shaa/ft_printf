#include "../printf.h"

int	ft_puthex(unsigned long long n, char *base)
{
	int	i;
	int	len;

	i = ft_strlen(base);
	len = 0;
	if (n / i == 0)
	{
		len += ft_putchar(base[n % i]);
		return (len);
	}
	len += ft_puthex((n / i), base);
	len += ft_putchar(base[n % i]);
	return (len);
}