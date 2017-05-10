/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apersa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 19:27:07 by apersa            #+#    #+#             */
/*   Updated: 2016/12/29 18:54:05 by apersa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = (char *)malloc(sizeof(new_str) * ft_strlen(s) + 1);
	if (new_str == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
