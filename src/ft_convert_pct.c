/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:43:56 by rvidal            #+#    #+#             */
/*   Updated: 2022/03/31 08:43:57 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_pct(t_holder *holder)
{
	char	ch;

	ch = '%';
	holder->argument = malloc(sizeof(char));
	if (!holder->argument)
		return ;
	holder->argument[0] = ch;
	holder->len++;
}
