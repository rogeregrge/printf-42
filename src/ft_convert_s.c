/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:45:11 by rvidal            #+#    #+#             */
/*   Updated: 2022/03/31 14:17:19 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_s(t_format *fmt, t_holder *holder)
{
	char	*string;

	string = ft_strdup(va_arg(fmt->args, char *));
	if (!string)
		string = ft_strdup("(null)");
	holder->argument = malloc(sizeof(char) * (ft_strlen(string) + 1));
	if (!holder->argument)
		return ;
	ft_strlcpy(holder->argument, string, ft_strlen(string) + 1);
	holder->len = ft_strlen(holder->argument);
	free(string);
}
