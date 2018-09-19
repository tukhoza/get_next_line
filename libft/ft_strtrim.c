/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:55:57 by tukhoza           #+#    #+#             */
/*   Updated: 2018/06/10 15:42:05 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*snew;
	unsigned int	i;
	size_t			len;
	size_t			j;

	snew = NULL;
	i = 0;
	len = 0;
	j = 1;
	if (s == NULL)
		return (NULL);
	len = ft_strlen((char*)s);
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len - j] == ' ' || s[len - j] == ',' || s[len - j] == '\n' || \
			s[len - j] == '\t')
		j++;
	if (s[i] == '\0')
		j = 0;
	else
		j--;
	snew = ft_strsub(s, i, len - j - i);
	if (snew == NULL)
		return (NULL);
	return (snew);
}
