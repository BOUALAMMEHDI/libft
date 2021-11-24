/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:25:56 by mboualam          #+#    #+#             */
/*   Updated: 2021/11/22 23:06:55 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	nombre_de_mots(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static	char	*ft_string_allocate(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, i + 1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		str_len;
	char	**ptr;

	if (!s)
		return (NULL);
	str_len = nombre_de_mots(s, c);
	ptr = (char **) malloc(sizeof(char *) * (str_len + 1));
	if (!ptr)
		return (NULL);
	i = -1;
	while (++i < str_len)
	{
		while (s[0] == c)
			s++;
		ptr[i] = ft_string_allocate(s, c);
		s = s + ft_strlen(ptr[i]);
	}
	ptr[i] = 0;
	return (ptr);
}
/*
int main()
{
	char **tt = ft_split("lorem ipsum dolor sit amet",' ');

	int i = 0;
	while(*(tt + i))
	{
		printf("%s \n",*(tt + i));
		i++;
	}
	return 0;
}*/
