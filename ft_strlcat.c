/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:43:52 by mboualam          #+#    #+#             */
/*   Updated: 2021/11/14 18:56:43 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t	size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen((const char *)dest);
	len_s = ft_strlen((const char *)src);
	if (size <= len_d || size == 0)
		return (len_s + size);
	i = 0;
	while ((i < size - len_d - 1) && src[i])
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
