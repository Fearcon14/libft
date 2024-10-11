/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:07:16 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/11 15:55:34 by ksinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*nxt;

	if (!lst || !(*lst) || !del)
		return ;
	curr = (*lst);
	while (curr)
	{
		nxt = curr->next;
		ft_lstdelone(curr, *del);
		curr = nxt;
	}
	*lst = NULL;
}
