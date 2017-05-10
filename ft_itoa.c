/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apersa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 16:17:16 by apersa            #+#    #+#             */
/*   Updated: 2016/12/30 16:17:22 by apersa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nr_cif(long n)
{
	int nr;

	nr = 0;
	if (n < 0)
	{
		nr++;
		n = -n;
	}
	if (n == 0)
		nr = 1;
	else
		while (n > 0)
		{
			nr++;
			n /= 10;
		}
	return (nr);
}

char	*ft_itoa(int n)
{
	long	copie;
	char	*x;
	int		i;
	int		t;

	copie = n;
	t = 0;
	if (copie < 0)
	{
		t = 1;
		copie = -copie;
	}
	x = (char *)malloc(sizeof(char) * 20);
	x[0] = '0';
	x[nr_cif(n)] = '\0';
	i = nr_cif(n) - 1;
	while (copie != 0)
	{
		x[i] = copie % 10 + '0';
		i--;
		copie /= 10;
	}
	if (t)
		x[i] = '-';
	return (x);
}
