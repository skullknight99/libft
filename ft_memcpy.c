/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:19:00 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/08 18:07:36 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*srx;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	srx = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dst[i] = srx[i];
		i++;
	}
	return (dest);
}
