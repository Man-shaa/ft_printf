/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:27:19 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/06 15:27:19 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	len;
	unsigned int	unsnb;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		unsnb = -(unsigned int)n;
	}
	else
		unsnb = (unsigned int)n;
	if (unsnb > 9)
		len += ft_putnbr(unsnb / 10);
	len += ft_putchar((unsnb % 10) + 48);
	return (len);
}
