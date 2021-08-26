/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_aux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:24:55 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/26 14:33:50 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

void	change_dim(t_map *map, int i, int j, int dim)
{
	if (map->dim_max < dim)
	{
		map->dim_max = dim;
		map->xpos = i;
		map->ypos = j;
	}
}

int	is_possible(t_map map1, int posx, int posy, int dim)
{
	if (posx + dim > map1.height || posy + dim > map1.width)
		return (0);
	return (1);
}

int	free_zeros(t_map map, int posx, int posy, int dim)
{
	int	i;
	int	j;

	j = posy;
	i = posx;
	while (i < posx + dim && j < posy + dim)
	{
		if (map.table[posx + dim - 1][j] == map.red
			|| map.table[i][posy + dim - 1] == map.red)
			return (0);
		i++;
		j++;
	}
	return (1);
}
