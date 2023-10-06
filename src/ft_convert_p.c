/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:44:00 by rvidal            #+#    #+#             */
/*   Updated: 2022/03/31 15:57:13 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_p(t_format *fmt, t_holder *holder)
{
	void	*ptr;
	char	*address;

	ptr = va_arg(fmt->args, void *);
	if (!ptr)
		ptr = 0;
	address = ft_itoa_base((unsigned long)ptr, HEXA_L_BASE);
	holder->argument = ft_strjoin(HEX_L_PREFIX, address);
	free(address);
	holder->len = ft_strlen(holder->argument);
}
