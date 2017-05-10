/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apersa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 19:19:23 by apersa            #+#    #+#             */
/*   Updated: 2016/12/29 14:41:02 by apersa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*list_new;

	list = f(lst);
	list_new = list;
	if (list_new == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		list->next = (*f)(lst);
		if (list->next == NULL)
			return (NULL);
		list = list->next;
	}
	return (list_new);
}
