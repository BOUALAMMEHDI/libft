/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:46:03 by mboualam          #+#    #+#             */
/*   Updated: 2021/11/17 01:10:55 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = (char *)malloc(size * count);
	if (!(array))
		return (NULL);
	return (ft_memset(array, 0, size * count));
}
