/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinn <ksinn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:38:53 by ksinn             #+#    #+#             */
/*   Updated: 2024/10/10 18:46:14 by ksinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_divisor(int n)
{
	int	divisor;

	divisor = 1;
	while (n >= 10)
	{
		divisor *= 10;
		n /= 10;
	}
	return (divisor);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	int		divisor;

	if (n == 0 || n == -2147483648)
	{
		if (n == 0)
			write(fd, "0", 1);
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	divisor = find_divisor(n);
	while (divisor > 0)
	{
		digit = '0';
		digit += n / divisor;
		write(fd, &digit, 1);
		n %= divisor;
		divisor /= 10;
	}
}
