/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:33:14 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/10 09:49:57 by ksinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*hay;
	const char	*ndl;
	size_t		tmp;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		hay = haystack;
		ndl = needle;
		tmp = len;
		while (*hay && *ndl && *hay == *ndl && tmp > 0)
		{
			hay++;
			ndl++;
			tmp--;
		}
		if (*ndl == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
