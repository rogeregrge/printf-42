/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:28:38 by rvidal            #+#    #+#             */
/*   Updated: 2021/03/31 14:16:53 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, src, ft_strlen(src) + 1);
	return (dest);
}
