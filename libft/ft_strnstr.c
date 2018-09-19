/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:00:01 by tukhoza           #+#    #+#             */
/*   Updated: 2018/06/08 16:05:10 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j]
				&& s1[i + j] != '\0' && s2[j] != '\0')
		{
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		else
		{
			i++;
		}
	}
	return (0);
}
