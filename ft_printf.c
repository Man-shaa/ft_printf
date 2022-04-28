#include "printf.h"

const char	*ft_search_arg(va_list arg, const char *format, t_lw *sc)
{
	if (*format == 'd' || *format == 'i')
		sc->len += ft_putnbr(va_arg(arg, int));
	else if (*format == 's')
		sc->len += ft_putstr(va_arg(arg, char *));
	else if (*format == 'c')
		sc->len += ft_putchar(va_arg(arg, int));
	else if (*format == 'u')
		sc->len += ft_putnbr_unsigned(va_arg(arg, unsigned int));
	else if (*format == 'x')
		sc->len += ft_puthex(va_arg(arg, int), "0123456789abcdef");
	else if (*format == 'X')
		sc->len += ft_puthex(va_arg(arg, int), "0123456789ABCDEF");
	else if (*format == 'p')
		sc->len += ft_putaddr(va_arg(arg, int));
	else if (*format == '%')
		sc->len += ft_putchar('%');
	format++; // Avancer de 1 apres avoir lu le %[.] 
	return (format);
}

const char	*ft_read_text(t_lw *sc, const char *format)
{
	char	*next;

	next = ft_strrchr(format); // until the next "%"
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