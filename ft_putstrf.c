/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:44:40 by erigolon          #+#    #+#             */
/*   Updated: 2023/01/12 16:05:49 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
int	ft_putstrf(char *str, int count)
{
	int	i;	

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i] != '\0')
	{
		count += ft_putcharf(str[i]);
		i++;
	}
	return (count);
}
*/
int	ft_putstrf(char *str, int count)
{
	int	i;	

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i] != '\0')
	{
		count += ft_putcharf(str[i]);
		i++;
	}
	return (count);
}