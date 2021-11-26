/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:55:41 by mboualam          #+#    #+#             */
/*   Updated: 2021/11/19 21:37:03 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *s1)
{
	unsigned long int	result;
	int					i;
	int					signe;

	i = 0;
	signe = 1;
	while ((s1[i] >= 9 && s1[i] <= 13) || s1[i] == ' ')
		i++;
	if (s1[i] == '-' || s1[i] == '+')
	{
		if (s1[i] == '-')
			signe *= -1;
		i++;
	}
	result = 0;
	while (s1[i] >= '0' && s1[i] <= '9')
	{
		result = (result * 10) + (s1[i] - '0');
		if (result >= 9223372036854775807 && signe == -1)
			return (0);
		else if (result >= 9223372036854775807 && signe == 1)
			return (-1);
		i++;
	}
	return ((int)result * signe);
}

int main()
{
	printf("%d",ft_atoi("123456ABCD"));
}