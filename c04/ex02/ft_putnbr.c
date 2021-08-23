/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:32:09 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/19 19:54:45 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	y;

	y = nb;
	if (nb < 0)
	{
		print ('-');
		y = nb * -1;
	}
	if ((y / 10) > 0)
		ft_putnbr(y / 10);
	print (y % 10 + 48);
}
