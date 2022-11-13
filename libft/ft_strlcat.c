/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:34:25 by lbourniq          #+#    #+#             */
/*   Updated: 2022/11/11 11:57:47 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	len_base;

	if (!size && (!dst || !src))
		return (0);
	k = 0;
	i = ft_strlen(dst);
	len_base = i;
	if (len_base >= size)
		return (size + ft_strlen(src));
	while (size > i + 1 && src[k])
		dst[i++] = src[k++];
	dst[i] = '\0';
	return (len_base + ft_strlen(src));
}
