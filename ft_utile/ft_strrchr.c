#include "../printf.h"

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