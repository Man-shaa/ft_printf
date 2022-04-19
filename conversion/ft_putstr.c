#include "../printf.h"

int	ft_putstr(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (ft_strlen(str));
}