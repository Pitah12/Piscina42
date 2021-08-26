/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:34:34 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/22 21:17:32 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	recursive(int nb, int tmp, int pt)
{
	nb = nb * tmp;
	pt--;
	if (pt > 1)
	{
		return (recursive(nb, tmp, pt));
	}
	return (nb);
}

int	ft_recursive_power(int nb, int power)
{
	int	pt;
	int	tmp;

	tmp = nb;
	pt = power;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
		return (recursive(nb, tmp, pt));
}
