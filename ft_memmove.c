/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:44:41 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/11 18:49:24 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*srx;
	char	*dst;

	srx = (char *)src;
	dst = (char *)dest;
	if (srx == dst || n == 0)
		return (dest);
	if (dst > srx && dst - srx < (int)n)
	{
		i = n - 1;
		while (i >= 0)
		{
			dst[i] = srx[i];
			i--;
		}
		return (dest);
	}
	if (srx > dst && srx - dst < (int)n)
	{
		ft_memcpy(dst, srx, n);
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
