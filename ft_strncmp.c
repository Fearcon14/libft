/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:19:52 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/09 14:40:43 by ksinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;
	size_t			i;

	i = 0;
	while (i < n && s1[i])
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c2 == '\0')
			return (c1 - c2);
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	if (s2[i] == '\0' || i == n)
		return (0);
	return (s1[i] - s2[i]);
}
