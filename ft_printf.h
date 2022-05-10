/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:27:33 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/06 15:27:33 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_lw
{
	int	len;
	int	width;
}				t_lw;

int				ft_putchar(char c);
char			*ft_strrchr(const char *format);
int				ft_intlen(long int n);
int				ft_strlen(const char *str);

int				ft_putstr(char *str);
int				ft_putnbr(int nb);
unsigned int	ft_putnbr_unsigned(unsigned int nb);
int				ft_puthex(unsigned int n, char *base);
int				ft_putaddr(unsigned long int n);

const char		*ft_search_arg(va_list arg, const char *format, t_lw *sc);
const char		*ft_read_text(t_lw *sc, const char *format);
int				ft_printf(const char *format, ...);

#endif
