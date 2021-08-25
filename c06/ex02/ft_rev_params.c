/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:04:29 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/23 16:08:44 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	print_argv(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		print(argv[i]);
		i++;
	}
	print ('\n');
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		print_argv(argv[i]);
		i--;
	}
	return (0);
}
