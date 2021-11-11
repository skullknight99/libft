/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:38:50 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/04 11:44:25 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*target;
	size_t	i;

	target = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!(target))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		target[i] = s1[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}
