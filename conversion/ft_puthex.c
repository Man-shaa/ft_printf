/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:27:14 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/06 15:27:14 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthex(unsigned int n, char *base)
{
	unsigned long	i;
	int				len;

	i = ft_strlen(base);
	len = 0;
	if (n / i == 0)
	{
		len += ft_putchar(base[n % i]);
		return (len);
	}
	len += ft_puthex((n / i), base);
	len += ft_putchar(base[n % i]);
	return (len);
}
