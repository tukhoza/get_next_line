/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:54:07 by tukhoza           #+#    #+#             */
/*   Updated: 2018/06/05 17:45:11 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*c1;
	unsigned char		*c2;

	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	while (n > 0)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		else
			c1++;
		c2++;
		n--;
	}
	return (0);
}
