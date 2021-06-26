/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <tnave@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:59:46 by tnave             #+#    #+#             */
/*   Updated: 2021/01/11 15:12:21 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*end_list;

	if (!alst || !new)
		return ;
	if (*alst)
	{
		end_list = *alst;
		while (end_list->next != NULL)
			end_list = end_list->next;
		end_list->next = new;
	}
	else
		*alst = new;
}
