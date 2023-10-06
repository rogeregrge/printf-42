/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_d_i.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:42:21 by rvidal            #+#    #+#             */
/*   Updated: 2022/03/31 14:36:00 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_d_i(t_format *fmt, t_holder *holder)
{
	int	arg;

	arg = va_arg(fmt->args, int);
	holder->argument = ft_itoa(arg);
	holder->len = ft_strlen(holder->argument);
}
