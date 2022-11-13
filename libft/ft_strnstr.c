/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:35:32 by lbourniq          #+#    #+#             */
/*   Updated: 2022/11/11 10:02:32 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*src, const char *tofind, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!src && !len)
		return (NULL);
	if (!ft_strlen(tofind))
		return ((char *)src);
	while (src[i] && i < len)
	{
		if (src[i] == tofind[k])
			k++;
		else
		{
			i -= k;
			k = 0;
		}
		if (k == ft_strlen(tofind))
			return ((char *)src + (i - k + 1));
		i++;
	}
	return (NULL);
}
