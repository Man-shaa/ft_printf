#include "../printf.h"

unsigned int	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
	return ((unsigned int)ft_intlen(nb));
}