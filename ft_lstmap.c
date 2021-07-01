/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <tnave@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:01:17 by tnave             #+#    #+#             */
/*   Updated: 2021/05/23 18:57:04 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;

	while (lst)
	{
		if (!new_node)
		{
			new_node = ft_lstnew(f(lst->content));
			if (!(new_node))
				return (NULL);
			new_lst = new_node;
		}
		else
		{
			new_lst->next = ft_lstnew(f(lst->content));
			if (!(new_lst->next))
			{
				ft_lstclear(&new_node, del);
				return (NULL);
			}
			new_lst = new_lst->next;
		}
		lst = lst->next;
	}
	return (new_node);
}
