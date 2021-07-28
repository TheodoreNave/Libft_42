/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <tnave@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:55:59 by tnave             #+#    #+#             */
/*   Updated: 2021/06/29 16:57:05 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/pipex.h"

char	*ft_strjoin_three(char *s1, char *s2, char *s3)
{
	int				i;
	int				j;
	char			*str;

	i = 0;
	j = 0;
	if (!s1 || !s2 || !s3)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3) + 1));
	if (!(str))
		return (NULL);
	while (s1[j])
		str[i++] = s1[j++];
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	j = 0;
	while (s3[j])
		str[i++] = s3[j++];
	str[i] = '\0';
	return (str);
}
