/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>         +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:50:02 by rvidal            #+#    #+#             */
/*   Updated: 2022/03/31 08:46:01 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = ft_vprintf(args, format);
	va_end(args);
	return (len);
}

int	ft_vprintf(va_list args, const char *format)
{
	int			len;
	t_format	*fmt;

	fmt = ft_init_format(args, format);
	while (fmt->format[fmt->i])
	{
		if (fmt->format[fmt->i] == '%')
			ft_placeholder(fmt);
		else
		{
			fmt->len += write(1, &fmt->format[fmt->i], 1);
			fmt->i++;
		}
	}
	len = fmt->len;
	free(fmt);
	return (len);
}
