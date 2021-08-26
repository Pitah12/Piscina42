/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:14:31 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/22 20:09:52 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	recursive(int tmp, int fact)
{
	tmp = tmp * fact--;
	if (fact != 0)
	{
		return (recursive(tmp, fact));
	}
	else
		return (tmp);
}

int	ft_iterative_factorial(int nb)
{
	int	tmp;
	int	fact;

	tmp = nb;
	fact = tmp - 1;
	if (nb == -1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
		return (recursive(tmp, fact));
}
