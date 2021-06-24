/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <tnave@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:00:32 by tnave             #+#    #+#             */
/*   Updated: 2021/05/23 18:52:45 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*end_list;

	end_list = lst;
	if (!lst)
		return (end_list);
	while (end_list->next != NULL)
		end_list = end_list->next;
	return (end_list);
}
