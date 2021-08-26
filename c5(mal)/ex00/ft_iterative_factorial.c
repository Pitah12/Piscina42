/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:02:59 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/22 21:16:54 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	tmp;
	int	fact;

	i = 1;
	tmp = nb;
	fact = tmp - 1;
	if (nb == -1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (fact != 0)
	{
		tmp = tmp * fact--;
	}
	return (tmp);
}
