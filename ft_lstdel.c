/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apersa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 16:42:55 by apersa            #+#    #+#             */
/*   Updated: 2016/12/30 16:43:02 by apersa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*nxtlst;

	lst = *alst;
	while (lst)
	{
		nxtlst = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nxtlst;
	}
	*alst = NULL;
}
