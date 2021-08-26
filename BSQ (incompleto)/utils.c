/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:58:46 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/26 14:15:33 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

void	ft_printtab(t_map map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map.height)
	{
		j = 0;
		while (j < map.width)
		{
			ft_putchar(map.table[i][j++]);
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (nbr);
}
