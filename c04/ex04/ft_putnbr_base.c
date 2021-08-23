/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:31:01 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/19 20:30:55 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

int	str_len(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	check_base(char *base)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (str_len(base) < 2)
	{
		return (0);
	}
	while (base[i])
	{
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				return (0);
			k++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	y;
	int				len;

	len = str_len(base);
	y = nbr;
	if (check_base(base) != 0)
	{
		if (nbr < 0)
		{
			print ('-');
			y = nbr * -1;
		}
		if ((y / len) > 0)
			ft_putnbr_base(y / len, base);
		print (base[y % len]);
	}
}
