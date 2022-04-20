#include "printf.h"

const char	*ft_search_arg(va_list arg, const char *format, t_lw *sc)
{
	if (*format == 'd' || *format == 'i')
		sc->len += ft_putnbr(va_arg(arg, int));
	else if (*format == 's')
		sc->len += ft_putstr(va_arg(arg, char *), sc);
	else if (*format == 'c')
		sc->len += ft_putchar(va_arg(arg, int));
	else if (*format == 'u')
		sc->len += ft_putnbr_unsigned(va_arg(arg, unsigned int));
	else if (*format == 'x')
			sc->len += ft_puthex(va_arg(arg, int));
	else if (*format == 'X')
			sc->len += ft_puthex_maj(va_arg(arg, int));
	// else if (*format == 'p')
	// 	sc->len += ;
	else if (*format == '%')
	{
		write(1, "%", 1);
		sc->len += 1;
	}
	format++; // Avancer de 1 apres avoir lu le %[.] 
	return (format);
}

const char	*ft_read_text(t_lw *sc, const char *format)
{
	char	*next;

	next = ft_strrchr(format);
	if (next)
		sc->width = next - format;
	else 
		sc->width = ft_strlen(format);
	write(1, format, sc->width);
	sc->len += sc->width;
	while (*format && *format != '%')
		format++;
	return (format);
}

int	ft_printf(const char *format, ...)
{
	t_lw	sc;

	va_list	arg;
	va_start(arg, format);
	sc.len = 0;
	sc.width = 0;
	while (*format)
	{
		if (*format == '%')
			format = ft_search_arg(arg, (format + 1), &sc);
		else
			format = ft_read_text(&sc, format);
		
	}
	va_end(arg);
	return (sc.len);
}

#include <stdio.h>
int	main(void)
{
	char			c = 'M';
	char			*s2 = NULL;
	unsigned int	ui_max = 4294967295;
	int				i_min = -2147483647;

	// printf("%d\n", ft_printf(""));
	printf("	: %d\n", ft_printf("Random int : %i", 123456789));
	printf("	: %d\n\n", printf("Random int : %i", 123456789));

	printf("	: %d\n", ft_printf("%d", 0));
	printf("	: %d\n\n", printf("%d", 0));

	printf("	: %d\n", ft_printf("int min : %d", i_min));
	printf("	: %d\n\n", printf("int min : %d", i_min));

	printf("	: %d\n", ft_printf("int max : %d", 2147483647));
	printf("	: %d\n\n", printf("int max : %d", 2147483647));

	printf("	: %d\n", ft_printf("Unsigned int max : %u", ui_max));
	printf("	: %d\n\n", printf("Unsigned int max : %u", ui_max));

	printf("	: %d\n", ft_printf("2 pour100 'c' : %c%c", c, '9'));
	printf("	: %d\n\n", printf("2 pour100 'c' : %c%c", c, '9'));

	printf("	: %d\n", ft_printf("String : %s", "Yasuo\tc'est un champ de fdp."));
	printf("	: %d\n\n", printf("String : %s", "Yasuo\tc'est un champ de fdp."));

	printf("	: %d\n", ft_printf("String nulle : %s", s2));
	printf("	: %d\n\n", printf("String nulle : %s", s2));

	printf("	: %d\n", ft_printf("Hexa en maj : %X", 2783)); // Hex a l'envers ou fonctionne pas
	printf("	: %d\n\n", printf("Hexa en maj : %X", 2783)); // Hex a l'envers ou fonctionne pas

	printf("	: %d\n", ft_printf("Hexa en min : %x", 7045)); // Hex a l'envers ou fonctionne pas
	printf("	: %d\n\n", printf("Hexa en min : %x", 7045)); // Hex a l'envers ou fonctionne pas
	
	printf("	: %d\n", ft_printf("Char in int %i", 'j'));
	printf("	: %d\n\n", printf("Char in int %i", 'j'));
	
	printf("	: %d\n", ft_printf("%% Je suis un %%"));
	printf("	: %d\n\n", printf("%% Je suis un %%"));

	printf("	: %d\n", ft_printf("%%%%%%"));
	printf("	: %d\n\n", printf("%%%%%%"));
	return (0);
}