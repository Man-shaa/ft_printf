/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:27:17 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/07 11:57:52 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_puthexaddr(unsigned long int n, char *base)
{
	unsigned long int	i;
	int					len;

	i = ft_strlen(base);
	len = 0;
	if (n / i == 0)
	{
		len += ft_putchar(base[n % i]);
		return (len);
	}
	len += ft_puthexaddr((n / i), base);
	len += ft_putchar(base[n % i]);
	return (len);
}

int	ft_putaddr(unsigned long int n)
{
	int	len;

	len = 0;
	if (!n)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += ft_puthexaddr(n, "0123456789abcdef");
	return (len);
}
