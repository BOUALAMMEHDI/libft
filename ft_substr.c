/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:29:42 by mboualam          #+#    #+#             */
/*   Updated: 2021/11/20 11:29:11 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen((char *)s);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (strlen - start >= len)
		substr = (char *)malloc ((len + 1) * sizeof(char));
	else
		substr = (char *) malloc ((strlen - start + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, (s + start), (len + 1));
	return (substr);
}
