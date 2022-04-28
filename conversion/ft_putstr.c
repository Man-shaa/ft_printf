#include "../printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		len = 6;
		return (len);
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
		len++;
	}
	return (len);
}