/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:25:27 by lbourniq          #+#    #+#             */
/*   Updated: 2022/11/11 09:36:06 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ret;
	size_t	n;

	if (nelem > 0 && elsize > SIZE_MAX / nelem)
		return (NULL);
	n = nelem * elsize;
	ret = malloc(n);
	if (!ret)
		return (NULL);
	ft_bzero(ret, n);
	return (ret);
}
