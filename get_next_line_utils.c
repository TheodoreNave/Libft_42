/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <tnave@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:01:38 by tnave             #+#    #+#             */
/*   Updated: 2021/06/24 16:53:20 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	size_t		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_len(char *str)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int			i;
	char		*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!(str))
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int			i;
	char		*str;
	size_t		max;

	i = 0;
	str = (char *)s;
	max = ft_strlen(s);
	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (NULL);
	if (start > len)
		return (NULL);
	while (s[start] && len && start < max)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return ((char *)str);
}

char	*ft_strchr(const char *s, int c)
{
	int			i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
