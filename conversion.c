#include "printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (ft_strlen(str));
}

int	ft_putnbr(int nb)
{
	long	n;

	n = (long)nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
	else
		ft_putchar((n % 10) + 48);
	return (ft_intlen(nb));
}

unsigned int	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
	return ((unsigned int)ft_intlen(nb));
}

int	ft_puthex(int n, char c)
{
	char	*base;
	char	*base2;

	base = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	if (c = 'x')
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