/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:14:10 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/10 13:14:11 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	temp = 0;
	while (i < size)
	{
		len = 1;
		while (len < size)
		{
			if (tab[len - 1] > tab[len])
				ft_swap(&tab[len - 1], &tab[len]);
			len++;
		}
		i++;
	}
}
