/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onaciri <onaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by oryadi            #+#    #+#             */
/*   Updated: 2023/08/31 16:13:21 by onaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendst;

	i = 0;
	lensrc = ft_strlen(src);
	if (!dst && !dstsize)
		return (lensrc);
	lendst = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= lendst)
		return (lensrc + dstsize);
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - lendst - 1)
		{
			dst[lendst + i] = src[i];
			i++;
		}
		dst[lendst + i] = '\0';
	}
	return (lensrc + lendst);
}
