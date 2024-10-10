/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:30:57 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/10 15:29:35 by ksinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	s1_len;
	size_t	left;
	size_t	right;
	size_t	i;

	s1_len = ft_strlen(s1);
	left = 0;
	while (ft_strchr(set, s1[left]) && s1[left])
		left++;
	right = s1_len - 1;
	while (ft_strchr(set, s1[right]) && right > left)
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
	if (left == right)
		i--;
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char	s1[] = "";

// 	ft_strtrim(s1, "");
// }
