#include "../printf.h"

int	ft_putstr(char *str, t_lw *sc)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		sc->len += 6;
		return (0);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}