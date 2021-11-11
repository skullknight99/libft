/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:39:05 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/09 17:14:10 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static long	ft_sign(long n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static long	nlen(long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*nzero(void)
{
	char	*arr;

	arr = malloc(2);
	arr[0] = '0';
	arr[1] = '\0';
	return (arr);
}

static char	*ft_strrev(char *s)
{
	char	tmp;
	size_t	l;
	size_t	i;

	l = ft_strlen(s) - 1;
	i = 0;
	while (i < l)
	{
		tmp = s[i];
		s[i] = s[l];
		s[l] = tmp;
		i++;
		l--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;
	size_t	l;
	int		neg;
	long	nb;

	if (n == 0)
		return (nzero());
	neg = 0;
	i = 0;
	if (n < 0)
		neg = 1;
	nb = ft_sign(n);
	l = nlen(nb);
	res = ft_calloc((l + 1 + neg), sizeof(char));
	if (!res)
		return (NULL);
	while (i < l)
	{
		res[i++] = (nb % 10) + 48;
		nb /= 10;
	}
	if (neg)
		res[i] = '-';
	return (ft_strrev(res));
}
