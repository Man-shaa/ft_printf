#include "../printf.h"

unsigned int	ft_putnbr_unsigned(unsigned int nb)
{
	unsigned int	i;
	int 			len;

	i = nb;
	len = 0;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
	if (i == 0)
	{
		len++;
		return (len);
	}
	while (i != 0)
	{
		i /= 10;
		len++;
	}
	return (len);
}