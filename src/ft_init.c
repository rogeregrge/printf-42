/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:50:17 by rvidal            #+#    #+#             */
/*   Updated: 2022/03/31 09:51:07 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_format	*ft_init_format(va_list args, const char *format)
{
	t_format	*fmt;

	fmt = malloc(sizeof(t_format));
	if (!fmt)
		return (NULL);
	fmt->format = format;
	va_copy(fmt->args, args);
	fmt->i = 0;
	fmt->len = 0;
	return (fmt);
}

t_holder	*ft_init_holder(void)
{
	t_holder	*holder;

	holder = malloc(sizeof(t_holder));
	if (!holder)
		return (NULL);
	holder->argument = NULL;
	holder->specifier = '\0';
	holder->len = 0;
	return (holder);
}
