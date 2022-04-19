#include "../printf.h"

int	ft_puthex(int n, char c)
{
	char	*base;
	char	*base2;

	base = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	if (c == 'x')
	{
		while (n >= 16)
		{
			ft_putchar(base[n % 16]);
			n /= 16;
		}
		ft_putchar(base[n]);
	}
	else if (c == 'X')
	{
		while (n >= 16)
		{
			ft_putchar(base2[n % 16]);
			n /= 16;
		}
		ft_putchar(base2[n]);
	}
	return (ft_intlen(n));
}