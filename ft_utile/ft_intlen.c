#include "../printf.h"

int	ft_intlen(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i++;
		return (i);
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}