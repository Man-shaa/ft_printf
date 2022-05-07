/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:27:25 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/06 15:27:25 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
