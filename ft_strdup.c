/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:28:46 by mboualam          #+#    #+#             */
/*   Updated: 2021/11/17 01:09:54 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	z;
	size_t	i;

	z = ft_strlen(s1);
	dest = malloc(sizeof(char) * (z + 1));
	if (dest == 0)
		return (NULL);
	i = 0;
	while (i != ft_strlen(s1) + 1)
	{
		dest[i] = s1[i];
		i++;
	}
	return (dest);
}
