/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:42:56 by tukhoza           #+#    #+#             */
/*   Updated: 2018/06/08 09:33:40 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*cu;

	i = 0;
	cu = (unsigned char *)b;
	while (i < len)
	{
		cu[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
