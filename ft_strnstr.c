/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:36:49 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/08 12:40:33 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i <= len)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && needle[j] && (i + j < len))
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	char ah[] = "ahmed elmountassir";
	char f[] = "mo";

	printf("%s", ft_strnstr(ah, f, 7));
	return 0;
}*/
