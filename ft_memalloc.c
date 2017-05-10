/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apersa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 19:19:42 by apersa            #+#    #+#             */
/*   Updated: 2016/12/22 19:19:44 by apersa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	if (!(memory = (char *)malloc(sizeof(*memory) * size)) || !size)
		return (NULL);
	while (i < size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
