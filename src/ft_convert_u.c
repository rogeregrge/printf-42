/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:43:50 by rvidal            #+#    #+#             */
/*   Updated: 2022/03/31 16:12:44 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_u(t_format *fmt, t_holder *holder, char *base)
{
	unsigned int	nbr;
	char			*ptr;

	nbr = (unsigned int)va_arg(fmt->args, unsigned int);
	ptr = ft_itoa_base((unsigned long)nbr, base);
	holder->argument = ft_strdup(ptr);
	free(ptr);
	holder->len = ft_strlen(holder->argument);
}
