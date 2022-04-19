#include "../printf.h"

int	ft_putnbr(int nb)
{
	long	n;

	n = (long)nb;
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
	}
	else if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return (ft_intlen(nb));
}