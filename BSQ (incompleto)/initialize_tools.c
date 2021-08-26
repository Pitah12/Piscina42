/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_tools.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:21:15 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/26 12:28:58 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int	get_size(char *file)
{
	int		op;
	char	c;
	int		huge_size;

	huge_size = 0;
	op = open(file, O_RDONLY);
	if (op == -1)
	{
		ft_putstr("cant open file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		while (read(op, &c, 1))
		{
			huge_size++;
		}
	}
	close (op);
	return (huge_size);
}

int	get_lines(char *info)
{
	int	lines;
	int	i;

	lines = 0;
	i = 0;
	while (info)
	{
		if (info[i] != '\n')
			lines++;
		i++;
	}
	return (lines);
}

void	get_len(char *info, t_map *map)
{
	int	len;
	int	flag;
	int	i;

	i = 0;
	flag = 1;
	len = 0;
	while (*info != '\0')
	{
		if (*info == '\n' && flag == 1)
		{
			flag = 0;
		}
		else if (*info != '\n' && flag == 0)
		{
			len++;
		}
		else if (*info == '\n')
			break ;
		info++;
	}
	map->width = len;
}
