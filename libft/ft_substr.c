/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <lbourniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:51:40 by lbourniq          #+#    #+#             */
/*   Updated: 2022/11/11 09:43:11 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	if (len < ft_strlen(&s[start]))
		res = (char *)malloc(sizeof(char) * (len + 1));
	else
		res = (char *)malloc(sizeof(char) * (ft_strlen(&s[start])));
	if (!res)
		return (NULL);
	i = 0;
	if (start <= ft_strlen(s))
	{
		while (s[start] && len--)
			res[i++] = s[start++];
	}
	res[i] = '\0';
	return (res);
}
