/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:30:28 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/29 13:33:38 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *list;
	t_list *list_el;

	list = NULL;
	while (lst)
	{
		if (!(list_el = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&list, list_el);
	}
	return (list);
}
