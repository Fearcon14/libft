/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:06:59 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/11 14:16:36 by ksinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check if c is a printable character
Return
TRUE	1
FALSE	0
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}