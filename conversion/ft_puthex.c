#include "../printf.h"

int	ft_puthex(int n)
{
	int		i;
	int		tmp;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	tmp = n;
	while (tmp)
	{
		tmp /= 16;
		i++;
	}
	if (n >= 16)
	{
		ft_puthex(n / 16);
		ft_putchar(base[n % 16]);
	}
	ft_putchar(base[n]);
	return (i);
}