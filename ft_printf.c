/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:13:38 by erigolon          #+#    #+#             */
/*   Updated: 2023/01/12 11:37:57 by erigolon         ###   ########.fr       */
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
		count = ft_putcharf(ph[i]);
		i++;
	}
	return (count);
}
