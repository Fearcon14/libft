/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:30:57 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/10 15:12:06 by ksinn            ###   ########.fr       */
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
	while (ft_strchr(set, s1[right]))
		right--;
	if (!s1_len || !ft_strlen(set))
		return ((char *)s1);
	res = (char *)malloc((right - left + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (left <= right)
	{
		res[i] = s1[left];
		// printf("%c", res[i]);
		i++;
		left++;
	}
	res[i] = '\0';
	// printf("%s", res);
	return (res);
}

// int	main(void)
// {
// 	char	s1[] = "lorem \n ipsum \t dolor \n sit \t amet";

// 	ft_strtrim(s1, " lte");
// }
