/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:13:38 by erigolon          #+#    #+#             */
/*   Updated: 2023/01/12 12:42:05 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *ph, ...)
{
	int		num_args;
	va_list	args;
	int		i;
	int		count;

	num_args = ft_strlen(ph);
	va_start(args, ph);
	i = 0;
	count = 0;
	while (i < num_args)
	{
		if (ph[i] == '%')
		{
			i++;
			ft_check_percentage(ph[i], args, count);
		}
		else
			count = count + ft_putcharf(ph[i]);
		i++;
	}
	return (count);
}
