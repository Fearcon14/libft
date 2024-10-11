/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:07:16 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/11 15:30:53 by ksinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;

	if (!(*lst))
		return ;
	nxt = (*lst)->next;
	while (nxt)
	{
		nxt = (*lst)->next;
		ft_lstdelone(*lst, *del);
		*lst = nxt;
	}
	*lst = NULL;
}
