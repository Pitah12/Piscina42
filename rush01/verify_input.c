/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 21:22:36 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/15 21:49:59 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_error(void);

void	check_serie(int *ptr, int start, int end);

int	*verify_input(int *ptr)
{
	int	i;

	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] != 1 && ptr[i] != 2 && ptr[i] != 3 && ptr[i] != 4)
		{
			print_error();
			break ;
		}
		i++;
	}
	check_serie(ptr, 0, 4);
	check_serie(ptr, 8, 12);
	return (ptr);
}

void	check_serie(int *ptr, int start, int end)
{
	while (start < end)
	{
		if ((ptr[start] + ptr[start + 4]) <= 2
			|| (ptr[start] + ptr[start + 4]) > 5)
		{
			print_error();
			break ;
		}
		start++;
	}
}
