/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <tnave@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:01:04 by tnave             #+#    #+#             */
/*   Updated: 2021/05/23 18:52:33 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*end_list;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		end_list = *lst;
		del(end_list->content);
		*lst = end_list->next;
		free(end_list);
	}
	*lst = NULL;
}
