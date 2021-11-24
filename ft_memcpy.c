/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:07:00 by mboualam          #+#    #+#             */
/*   Updated: 2021/11/17 00:56:32 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		d[i] = s[i];
		n--;
		i++;
	}
	return (dest);
}
