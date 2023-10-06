/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:55:50 by rvidal            #+#    #+#             */
/*   Updated: 2021/03/31 09:53:08 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;
	char	x;

	ptr = (char *)s;
	x = (char)c;
	i = 0;
	if (x == '\0')
	{
		i = ft_strlen(ptr);
		return (&ptr[i]);
	}
	while (ptr[i] != '\0')
	{
		if (ptr[i] == x)
			return (&ptr[i]);
		i++;
	}
	ptr = NULL;
	return (ptr);
}
