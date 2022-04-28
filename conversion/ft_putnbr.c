#include "../printf.h"

int	ft_putnbr(int n)
{
	int				len;
	unsigned int	unsnb;

	unsnb = n;
	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		unsnb = -n;
	}
	if (unsnb > 9)
		len += ft_putnbr(unsnb / 10);
	len += ft_putchar((unsnb % 10) + 48);
	return (len);
}