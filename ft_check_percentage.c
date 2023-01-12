/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_percentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:38:57 by erigolon          #+#    #+#             */
/*   Updated: 2023/01/12 13:33:30 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_percentage(char convert, va_list args, int count)
{
	if (convert == 'c')
		count += ft_putcharf(va_arg(args, int));
	else if (convert == '%')
		count += ft_putcharf('%');
	return (count);
}
