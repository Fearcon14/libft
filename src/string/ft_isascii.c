/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:59:21 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/11 14:16:28 by ksinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check if c is in the ASCII Table
Return
TRUE	1
FALSE	0
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}