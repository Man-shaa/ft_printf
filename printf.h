#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef struct	t_lw
{
	int	len;
	int width;
}				t_lw;

int				ft_putchar(char c);
char			*ft_strrchr(const char *format);
int				ft_intlen(int n);
int				ft_strlen(const char *str);

int				ft_putstr(char *str);
int				ft_putnbr(int nb);
unsigned int	ft_putnbr_unsigned(unsigned int nb);
int				ft_puthex(int n, char c);

const char		*ft_search_arg(va_list arg, const char *format, t_lw *sc);
const char		*ft_read_text(t_lw *sc, const char *format);
int				ft_printf(const char *format, ...);

#endif