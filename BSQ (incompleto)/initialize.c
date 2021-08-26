/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:57:37 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/26 14:32:37 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	*get_info(char *file, int size)
{
	char	*buffer;
	int		op;

	buffer = malloc(sizeof(char) * (get_size(file) + 1));
	op = open(file, O_RDONLY);
	if (op == -1)
	{
		ft_putstr("cant open file\n");
		exit (EXIT_FAILURE);
	}
	else
	{
		read(op, buffer, size);
	}
	close(op);
	return (buffer);
}

int	get_params(t_map *map, char *info)
{
	int	i;

	i = 0;
	while (info[i] != '\n')
	{
		map->height = ft_atoi(info);
		while ('0' <= info[i] && info[i] <= '9')
			i++;
		map->green = info [i];
		map->red = info [i + 1];
		map->SQ = info [i + 2];
		break ;
	}
	return (i + 4);
}

void	make_space(t_map *map)
{
	int	i;

	i = 0;
	map->table = malloc(sizeof(char *) * map->height);
	if (!map->table)
		exit (EXIT_FAILURE);
	while (i < map->height)
	{
		map->table[i] = malloc(sizeof(char) * map->width);
		if (!map->table[i])
			exit (EXIT_FAILURE);
		i++;
	}
}

void	fill_t_map(t_map *map, char *info, int pos_values)
{
	int	i;
	int	j;
	int	start_values;

	start_values = pos_values;
	i = 0;
	while (info[start_values] != '\0')
	{
		if (info[start_values] != '\n')
		{
			map->table[i][j] = info[start_values];
			j++;
		}
		if (info[start_values] == '\n')
		{
			map->table[i][j] = '\0';
			j = 0;
			i++;
		}
		start_values++;
	}
}
