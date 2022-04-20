#include "../printf.h"

int	ft_putnbr(int nb)
{
	long	n;
	int		sign;

	sign = 0;
	n = (long)nb;
	if (n < 0)
	{
		write(1, "-", 1);
		sign++;
		ft_putnbr(-n);
	}
	else if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return (ft_intlen((long int)nb) + sign);
}