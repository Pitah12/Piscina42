/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:47:36 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/26 14:24:08 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

void	solve(t_map *map)
{
	int	dim;
	int	i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			dim = 1;
			while (is_possible(*map, i, j, dim) && free_zeros(*map, i, j, dim)
				&& map->table[i][j] == map->green)
			{
				change_dim(map, i, j, dim);
				dim++;
			}
			j++;
		}
		i++;
	}
	sustituir(map);
	ft_printtab(*map);
}

void	sustituir(t_map *map1)
{
	int	i;
	int	j;

	i = map1->xpos;
	while (i < map1->dim_max + map1->xpos)
	{
		j = map1->ypos;
		while (j < map1->dim_max + map1->ypos)
		{
			map1->table[i][j] = map1->SQ;
			j++;
		}
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
