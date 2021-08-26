/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:59:07 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/26 14:33:50 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
typedef struct s_map_info
{
	int			height;
	int			width;
	int			xpos;
	int			ypos;
	int			dim_max;
	char		green;
	char		red;
	char		SQ;
	char		**table;
}				t_map;
int		main(int argc, char **argv);
int		get_params(t_map *map, char *info);
int		ft_atoi(char *str);
void	free_me(t_map *map);
int		get_size(char *file);
char	*get_info(char *file, int size);
int		get_lines(char *info);
void	get_len(char *info, t_map *map);
void	make_space(t_map *map);
void	fill_t_map(t_map *map, char *info, int pos_values);
void	ft_printtab(t_map map);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	solve(t_map *map);
void	sustituir(t_map *map1);
int		valid_map(char *info, t_map map);
void	free_me(t_map *map);
int		is_possible(t_map map1, int posx, int posy, int dim);
int		free_zeros(t_map map, int posx, int posy, int dim);
void	change_dim(t_map *map, int i, int j, int dim);
#endif
