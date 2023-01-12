/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:39:22 by erigolon          #+#    #+#             */
/*   Updated: 2023/01/12 11:33:58 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
void	ft_putchar(char c);

#endif