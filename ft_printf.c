#include "printf.h"

const char	*ft_search_arg(va_list arg, const char *format, t_lw *sc)
{
	if (*format == 'd' || *format == 'i')
		sc->len += ft_putnbr(va_arg(arg, int));
	else if (*format == 's')
		sc->len += ft_putstr(va_arg(arg, char *));
	else if (*format == 'c')
		sc->len += (va_arg(arg, int));
	else if (*format == 'u')
		sc->len += ft_putnbr_unsigned(va_arg(arg, unsigned int));
	else if (*format == 'x' || 'X')
	{
		if (*format == 'x')
			sc->len += ft_puthex(va_arg(arg, int), 'x');
		else if (*format == 'X')
			sc->len += ft_puthex(va_arg(arg, int), 'X');
	}
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
		while (*format == '%' && *(format + 1) == '%')
		{
			write(1, format, 1);
			sc.len += 1;
			format += 2;
		}
		if (*format == '%')
		{
			format = ft_search_arg(arg, format + 1, &sc);
			format++;
		}
		else
			format = ft_read_text(&sc, format);
		if (!format)
		{
			write(1, "(null)", 6);
			va_end(arg);
			return (sc.len);
		}
	}
	va_end(arg);
	return (sc.len);
}

#include <stdio.h>
int	main(void)
{
	char			c = 'M';
	char			s[] = "Si ca fonctionne j'ai quasi finis, ca tue !";
	unsigned int	ui_max = 4294967295;
	int				i_min = -2147483647;

	// printf("%d\n", ft_printf(""));
	ft_printf("Hello %i\n", 123456789);
	printf("Hello %i\n\n", 123456789);

	ft_printf("et Monsieur %d\n", 987654321);
	printf("et Monsieur %d\n\n", 987654321);

	ft_printf("vous voila : %c", c);
	printf("vous voila : %c", c);

	ft_printf("%c\n", '9');
	printf("%c\n\n", '9');

	ft_printf("%s\n", s);
	printf("%s\n\n", s);

	ft_printf("%s\n", "Yasuo\tc'est un champ de fdp.");
	printf("%s\n\n", "Yasuo\tc'est un champ de fdp.");

	ft_printf("%X\n", 123456789);
	printf("%X\n\n", 123456789);

	ft_printf("%x\n", 123456789);
	printf("%x\n\n", 123456789);

	ft_printf("int min : %i, int max : %i\n", i_min, 2147483647);
	printf("int min : %i, int max : %i\n\n", i_min, 2147483647);

	ft_printf(" Blablabla  %% Je suis un %%\n");
	printf(" Blablabla  %% Je suis un %%\n\n");
	
	ft_printf("Hello %i\n", 'j');
	printf("Hello %i\n\n", 'j');

	ft_printf("Hello %i\n", 123456789);
	ft_printf("Hello %i\n\n", 123456789);

	ft_printf("%c%%%c\n", 'A', 'B');
	printf("%c%%%c\n\n", 'A', 'B');

	ft_printf("Unsigned int : %u\n", ui_max);
	printf("Unsigned int : %u\n", ui_max);
	

	return (0);
}