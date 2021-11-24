/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:53:36 by mboualam          #+#    #+#             */
/*   Updated: 2021/11/23 19:36:05 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_digits(long int num)
{
	int	count;

	count = 0;
	if (num <= 0)
		count++;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = get_digits(n);
	ptr = (char *)malloc(sizeof(char ) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	len--;
	if (n == -2147483648)
		ft_strlcpy(ptr, "-2147483648", ft_strlen("-2147483648") + 1);
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	if (n == 0)
		ptr[0] = '0';
	while (n > 0)
	{
		ptr[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (ptr);
}
