/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apersa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 19:28:56 by apersa            #+#    #+#             */
/*   Updated: 2016/12/29 15:42:10 by apersa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		destsize;
	size_t		srcsize;

	i = 0;
	j = 0;
	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	while (dest[i])
		i++;
	if (destsize >= size)
		return (srcsize + size);
	while (src[j] && j < size - destsize - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destsize + srcsize);
}
