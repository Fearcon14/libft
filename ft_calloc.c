/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:35:38 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/10 10:57:58 by ksinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	char	**obj;
	size_t	i;

	obj = (char **)malloc(count * sizeof(char *));
	// TODO add malloc protection
	i = 0;
	while (i < count)
	{
		obj[i] = (char *)malloc(size);
		// TODO add malloc protection and free previous mallocs
		ft_bzero(obj[i], size);
		i++;
	}
}
