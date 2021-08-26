/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:19:19 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/26 14:33:34 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int	main(int argc, char **argv)
{
	char	*info;
	int		pos_values;
	t_map	map;
	int		i;

	i = 1;
	info = NULL;
	if (argc == 1)
		ft_putstr("lo intentamos :(");
	while (i < argc)
	{
		info = get_info(argv[i], get_size(argv[i]));
		pos_values = get_params(&map, info);
		get_len(info, &map);
		make_space(&map);
		fill_t_map(&map, info, pos_values);
		free(info);
		solve(&map);
		free_me(&map);
		i++;
	}
	return (1);
}
