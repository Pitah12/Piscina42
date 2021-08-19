/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:31:01 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/19 16:05:33 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

int	str_len(char *base)
{
	int len;

	len = 0;
	while (base[len] != '\0')
	{
		len++;
	}
	return (len);
}
void	ft_put_nbr_base(int nbr, char *base)
{
	unsigned int	y;
	int len = str_len(base);

	y = nbr;
	if (nbr < 0)
	{
		print ('-');
		y = nbr * -1;
	}
	if ((y / len) > 0)
		ft_put_nbr_base(y / len, base);
	print (y % len + 48);
}

int main (void)
{
	ft_put_nbr_base(6, "0123456789");
}