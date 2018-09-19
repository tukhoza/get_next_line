/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:49:38 by tukhoza           #+#    #+#             */
/*   Updated: 2018/06/06 14:57:32 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	size_t	i;
	char	*snew;

	if (s == NULL)
		return (NULL);
	size = 0;
	i = 0;
	snew = NULL;
	size = ft_strlen((char*)s);
	snew = (char*)malloc((sizeof(char) * size) + 1);
	if (snew == NULL)
		return (NULL);
	if (s != NULL)
	{
		while (i < size)
		{
			snew[i] = (*f)(s[i]);
			i++;
		}
		snew[i] = '\0';
	}
	return (snew);
}
