/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_percentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:38:57 by erigolon          #+#    #+#             */
/*   Updated: 2023/01/16 16:15:36 by erigolon         ###   ########.fr       */
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
	else if (convert == '%')
		count += ft_putcharf('%');
	return (count);
}
