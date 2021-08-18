/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:47:36 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/18 18:54:04 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int	nbr;
	int				i;
	int				neg;

	neg = 1;
	i = 0;
	nbr = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			i++;
		else
		{
			neg *= -1;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (nbr * neg);
}

int    main(void)
{
    char *c;
    
    c = "--+-+--+1234ab567";
    printf("%i\n", ft_atoi(c));
	printf("%i", atoi(c));
    return (0);
}
