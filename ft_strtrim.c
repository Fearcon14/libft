/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:30:57 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/10 15:46:51 by ksinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	left;
	size_t	right;
	size_t	i;

	left = 0;
	right = 0;
	while (s1[left] && ft_strchr(set, s1[left]))
		left++;
	if (ft_strlen(s1) > 0)
		right = ft_strlen(s1) - 1;
	while (right > left && ft_strchr(set, s1[right]))
		right--;
	res = (char *)malloc((right - left + 2) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i + left <= right)
	{
		res[i] = s1[i + left];
		i++;
	}
	res[i] = '\0';
	return (res);
}
