/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:19:22 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/10 19:20:19 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_set(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (69);
		i++;
	}
	return (0);
}

static size_t	f_pos(char const *str, char const *set)
{
	size_t	i;

	i = 0;
	while (is_set(set, str[i]))
		i++;
	return (i);
}

static size_t	l_pos(char const *str, char const *set)
{
	size_t	i;

	i = ft_strlen(str) - 1;
	while (is_set(set, str[i]) && i)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*res;
	size_t	i;
	size_t	len;
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	i = 0;
	start = f_pos(s, set);
	end = l_pos(s, set);
	len = (end - start) + 1;
	if ((int)end - (int)start < 0)
	{
		res = ft_calloc(1, sizeof(char));
		return (res);
	}
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_memmove(res, (s + start), len);
	return (res);
}
