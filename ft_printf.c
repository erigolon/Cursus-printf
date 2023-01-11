/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:13:38 by erigolon          #+#    #+#             */
/*   Updated: 2023/01/11 21:52:17 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_printf(char const *ph, ...)
{
	int		num_args;
	va_list	args;
	int		i;

	num_args = ft_strlen(ph);
	va_start(args, ph);
	i = 0;
	while (i < num_args)
	{
		ft_putchar(ph[i]);
		i++;
	}
	return (num_args);
}

int	main(void)
{
	printf("Hola");
	ft_printf("Hola");
	return (0);
}
