#include "printf.h"

char	*ft_strrchr(const char *format)
{
	while (*format)
	{
		if (*format == '%')
			return ((char *)format);
		format++;
	}
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_intlen(int n)
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