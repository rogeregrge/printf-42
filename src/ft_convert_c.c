/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:50:30 by rvidal            #+#    #+#             */
/*   Updated: 2022/03/31 08:42:13 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_c(t_format *fmt, t_holder *holder)
{
	char	ch;

	ch = (wint_t)va_arg(fmt->args, wint_t);
	holder->argument = malloc(sizeof(char));
	if (!holder->argument)
		return ;
	holder->argument[0] = ch;
	holder->len++;
}
