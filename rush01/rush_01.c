/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:15:27 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/17 15:58:18 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*verify_input(int *ptr);

void	print(char c);

void	print_error(void);

void	write_matrix(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			print(matrix[i][j] + '0');
			j++;
		}
		print('\n');
		i++;
	}	
}

void	resolve_matrix(int *ptr, int matrix[4][4])
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (ptr[k] == 1 && ptr[k + 4] == 4)
				matrix[j][i] = 4;
			i++;
			k++;
		}
		j++;
		k++;
	}
	write_matrix(matrix);
}

int	*ft_atoi(char *argv)
{
	int	*nbr;
	int	i;
	int	k;

	i = 0;
	k = 0;
	nbr = malloc(16 * sizeof(int));
	while (argv[i] != '\0')
	{
		if (argv[i] >= '0' && argv[i] <= '9')
		{
			nbr[k] = argv[i] - 48;
			i++;
			k++;
		}
		else if (argv[i] == ' ')
			i++;
		else
		{
			print_error();
			break ;
		}
	}
	nbr[k] = '\0';
	return (verify_input(nbr));
}

int	main(int argc, char **argv)
{
	int	*ptr;
	int	i;
	int	j;
	int	matrix [4][4];

	ptr = ft_atoi(argv[1]);
	argc = 2;
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			matrix[i][j] = 0;
			i++;
		}
		j++;
	}
	resolve_matrix(ptr, matrix);
	return (0);
}
