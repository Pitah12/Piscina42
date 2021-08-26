/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:58:44 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/25 20:58:45 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"
int	valid_map(char *info, t_map map)
{
	int	flag;
	int	i;
	int	size;

	size = get_size(info);
	i = 0;
	flag = 0;
	while (info[i] != '\n')
		i++;
	while (i < size)
	{
		if (info[i] != info[i + map.width])
			return (0);
	}
	return (1);
}

int	valid_chars(t_map map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < map.height)
	{
		while (j < map.width)
		{
			if (map.table[i][j] != map.green || map.table[i][j] != map.red
				|| map.table[i][j] != map.SQ)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	free_me(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->height)
	{
		free (map->table[i]);
		i++;
	}
	free (map->table);
}
