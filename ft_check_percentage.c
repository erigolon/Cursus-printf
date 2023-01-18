/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_percentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:38:57 by erigolon          #+#    #+#             */
/*   Updated: 2023/01/18 17:48:30 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_percentage(char convert, va_list args, int count)
{
	char	*str;

	if (convert == 'c')
		count += ft_putcharf(va_arg(args, int));
	else if (convert == 's')
		count += ft_putstrf(va_arg(args, char *));
	else if (convert == 'p')
	{
		write(1, "0x", 2);
		str = ft_hex(va_arg(args, unsigned long), 0);
		count += ft_putstrf(str) + 2;
		free(str);
	}
	else if (convert == 'd' || convert == 'i')
	{
		str = ft_itoa(va_arg(args, int));
		count += ft_putstrf(str);
		free(str);
	}
	else if (convert == 'u')
	{
		str = ft_itoa_u(va_arg(args, int));
		count += ft_putstrf(str);
		free(str);
	}
	else if (convert == 'X' || convert == 'x' )
	{
		if (convert == 'X')
			str = ft_hex(va_arg(args, unsigned int), 1);
		else
			str = ft_hex(va_arg(args, unsigned int), 0);
		count += ft_putstrf(str);
		free(str);
	}
	else if (convert == '%')
		count += ft_putcharf('%');
	return (count);
}
