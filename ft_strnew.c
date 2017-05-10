/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apersa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 19:29:56 by apersa            #+#    #+#             */
/*   Updated: 2016/12/29 19:35:27 by apersa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = (char *)malloc(sizeof(*new_str) * size + 1);
	if (new_str == NULL)
		return (NULL);
	while (i < size)
	{
		new_str[i] = '\0';
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
